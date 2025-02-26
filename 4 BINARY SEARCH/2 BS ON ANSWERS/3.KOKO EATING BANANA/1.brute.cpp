#include <bits/stdc++.h>
using namespace std;
int findMax(vector<int> &v, int n)
{
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, v[i]);
    }
    return ans;
}
int calculateTotalHours(vector<int> &v, int hours)
{
    int ans = 0;
    for (int j = 0; j < v.size(); j++)
    {
        ans += ceil((double)v[j] / (double)hours);
    }
    return ans;
}
int minimumRateToEatBananas(vector<int> &v, int h)
{
    int n = v.size();
    int maxi = findMax(v, n);
    int ans = -1;
    for (int i = 1; i <= maxi; i++)
    {
        int reqTime = calculateTotalHours(v, i);
        if (reqTime <= h)
        {
            ans = i;
            break;
        }
    }
    return ans;
}
int main()
{
    vector<int> v = {7, 15, 6, 3};
    int h = 8;
    int ans = minimumRateToEatBananas(v, h);
    cout << "Koko should eat atleast " << ans << " bananas/hr.\n";
    return 0;
    return 0;
}