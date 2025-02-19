#include <bits/stdc++.h>
using namespace std;
int getLB(vector<int> v, int n, int key)
{
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (v[mid] >= key)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int getUB(vector<int> v, int n, int key)
{
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (v[mid] > key)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
pair<int, int> solve(int n, int key, vector<int> v)
{
    int lb = getLB(v, n, key);
    if (lb == n || (lb != key))
        return {-1, -1};
    return {lb, getUB(v, n, key) - 1};
}
int main()
{
    int n = 7;
    int key = 13;
    vector<int> v = {3, 4, 13, 13, 13, 20, 40};
    // returning the last occurrence index if the element is present otherwise -1
    pair<int, int> ans = solve(n, key, v);
    cout << ans.first << " " << ans.second;
    return 0;
}
//TC is O(nlogn)