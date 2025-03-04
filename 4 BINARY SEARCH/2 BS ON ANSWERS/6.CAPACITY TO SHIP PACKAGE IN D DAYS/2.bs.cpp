#include <bits/stdc++.h>
using namespace std;
int data(vector<int> &weights, int capacity)
{
    int load = 0;
    int days = 1;
    for (int i = 0; i < weights.size(); i++)
    {
        if (load + weights[i] > capacity)
        {
            days = days + 1;
            load = weights[i];
        }
        else
        {
            load += weights[i];
        }
    }
    return days;
}
int leastWeightCapacity(vector<int> &weights, int d)
{
    int maxi = *max_element(weights.begin(), weights.end());
    int sum = accumulate(weights.begin(), weights.end(), 0);
    while (maxi <= sum)
    {
        int mid = (maxi + sum) / 2;
        int days = data(weights, mid);
        if (days <= d)
        {
            sum = mid - 1;
        }
        else
        {
            maxi = mid + 1;
        }
    }
    return maxi;
}
int main()
{
    vector<int> weights = {5, 4, 5, 2, 3, 4, 5, 6};
    int d = 5;
    int ans = leastWeightCapacity(weights, d);
    cout << "The minimum capacity should be: " << ans << "\n";
    return 0;
}