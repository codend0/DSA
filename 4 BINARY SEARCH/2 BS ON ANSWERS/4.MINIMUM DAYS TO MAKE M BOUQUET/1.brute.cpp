#include <bits/stdc++.h>
using namespace std;
int mini(vector<int> &arr, int n)
{
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        ans = min(ans, arr[i]);
    }
    return ans;
}
int maxi(vector<int> &arr, int n)
{
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, arr[i]);
    }
    return ans;
}
long long days(vector<int> &arr, int day, int n, int k)
{
    long long ans = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= day)
        {
            cnt++;
        }
        else
        {
            ans += (cnt / k);
            cnt = 0;
        }
    }
    ans += (cnt / k);//we have to write this for the case where there is no else 
    return ans;
}
int roseGarden(vector<int> &arr, int k, int m)
{
    int n = arr.size();
    int start = mini(arr, n);
    int end = maxi(arr, n);
    if (m * k > n)
        return -1;
    for (int i = start; i <= end; i++)
    {
        long long data = days(arr, i, n, k);
        if (data >= m)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {7, 7, 7, 7, 13, 11, 12, 7};
    int k = 3;
    int m = 2;
    int ans = roseGarden(arr, k, m);
    if (ans == -1)
        cout << "We cannot make m bouquets.\n";
    else
        cout << "We can make bouquets on day " << ans << "\n";
    return 0;
}
//Time Complexity: O((max(arr[])-min(arr[])+1) * N)