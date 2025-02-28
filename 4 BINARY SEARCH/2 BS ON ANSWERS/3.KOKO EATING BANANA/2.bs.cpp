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
int timeReq(vector<int> &v, int mid)
{
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        ans += ceil((double)v[i] / (double)mid);
    }
    return ans;
}
int minimumRateToEatBananas(vector<int> &v, int h)
{
    int n = v.size();
    int maxi = findMax(v, n);
    int low = 1, high = maxi;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int time = timeReq(v, mid);
        if (time <= h)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}
int main()
{
    vector<int> v = {7, 15, 6, 3};
    int h = 8;
    int ans = minimumRateToEatBananas(v, h);
    cout << "Koko should eat atleast " << ans << " bananas/hr.\n";
    return 0;
}
//TC is n*log(max v[])