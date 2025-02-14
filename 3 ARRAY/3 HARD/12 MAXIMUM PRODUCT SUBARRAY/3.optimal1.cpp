#include <bits/stdc++.h>
using namespace std;
int maxProductSubArray(vector<int> arr)
{
    //we declare a prefix and suffix for front itterationa and back itteration
    int pre = 1, suf = 1;
    int maxprdt = INT_MIN;
    int n = arr.size();
    for (int i = 0; i < arr.size(); i++)
    {
        if (pre == 0)
            pre = 1;
        if (suf == 0)
            suf = 1;
        pre *= arr[i];
        suf *= arr[n - i - 1];
        maxprdt = max(maxprdt, max(pre, suf));
    }
    return maxprdt;
}
int main()
{
    vector<int> arr = {1, 2, -3, 0, -4, -5};
    cout << "The maximum product subarray is: "
         << maxProductSubArray(arr) << "\n";
    return 0;
}
//TC IS o(n)