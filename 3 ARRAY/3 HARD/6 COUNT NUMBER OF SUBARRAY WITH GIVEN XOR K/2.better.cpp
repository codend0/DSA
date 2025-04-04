#include <bits/stdc++.h>
using namespace std;
int subarraysWithXorK(vector<int> a, int k)
{
    int n = a.size();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int xr = 0;
        for (int j = i; j < n; j++)
        {
            xr = xr ^ a[j];
            if (xr == k)
            {
                cnt++;
            }
        }
    }
    return cnt;
}
int main()
{
    vector<int> a = {4, 2, 2, 6, 4};
    int k = 6;
    int ans = subarraysWithXorK(a, k);
    cout << "The number of subarrays with XOR k is: " << ans << "\n";
    return 0;
}
