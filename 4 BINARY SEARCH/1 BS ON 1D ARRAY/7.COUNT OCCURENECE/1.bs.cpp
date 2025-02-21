#include <bits/stdc++.h>
using namespace std;
int first(vector<int> arr, int n, int x)
{
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int last(vector<int> arr, int n, int x)
{
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
pair<int, int> getFirstLast(vector<int> arr, int n, int x)
{
    int f = first(arr, n, x);
    if (f == -1)
        return {-1, -1};
    int l = last(arr, n, x);

    return {f, l};
}
int count(vector<int> arr, int n, int x)
{
    pair<int, int> ans = getFirstLast(arr, n, x);
    if (ans.first == -1)
        return 0;
    return {ans.second - ans.first + 1};
}
int main()
{
    vector<int> arr = {2, 4, 6, 8, 8, 8, 11, 13};
    int n = 8, x = 8;
    int ans = count(arr, n, x);
    cout << "The number of occurrences is: " << ans << "\n";
    return 0;
}