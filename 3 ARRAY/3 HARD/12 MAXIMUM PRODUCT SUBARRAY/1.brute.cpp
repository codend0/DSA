#include <bits/stdc++.h>
using namespace std;
int maxProductSubArray(vector<int> &arr)
{
    int n = arr.size();
    int maxprddt = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int prdt = 1;
            for (int k = i; k <= j; k++)
            {
                prdt *= arr[k];
                maxprddt = max(maxprddt, prdt);
            }
        }
    }
    return maxprddt;
}
int main()
{
    vector<int> arr = {1, 2, -3, 0, -4, -5};
    cout << "The maximum product subarray is: "
         << maxProductSubArray(arr) << "\n";
    return 0;
}
