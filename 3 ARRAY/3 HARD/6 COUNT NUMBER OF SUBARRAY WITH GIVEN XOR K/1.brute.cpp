#include <bits/stdc++.h>
using namespace std;
int subarraysWithXorK(vector<int> a, int k)
{
    int cnt = 0;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int XOR = 0;
            for (int u = i; u < j; u++)
            {
                XOR = XOR ^ a[u];
            }
            if (XOR == k)
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