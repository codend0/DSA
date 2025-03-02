#include <bits/stdc++.h>
using namespace std;
int divisor(vector<int> &arr, int n, int div)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ceil((double)arr[i] / (double)div);
    }
    return sum;
}
int smallestDivisor(vector<int> &arr, int limit)
{
    int n = arr.size();
    int maxi = *max_element(arr.begin(), arr.end());
    for (int i = 1; i < maxi; i++)
    {
        int sum = divisor(arr, n, i);
        if (sum <= limit)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int limit = 8;
    int ans = smallestDivisor(arr, limit);
    cout << "The minimum divisor is: " << ans << "\n";
    return 0;
}