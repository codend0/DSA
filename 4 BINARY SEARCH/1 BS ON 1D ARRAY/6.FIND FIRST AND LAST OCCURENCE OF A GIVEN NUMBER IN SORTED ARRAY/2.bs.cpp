#include <bits/stdc++.h>
using namespace std;
int getF(vector<int> v, int n, int key)
{
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (v[mid] == key)
        {
            ans = mid, high = mid - 1;
        }
        else if (v[mid] > key)
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
int getS(vector<int> v, int n, int key)
{
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (v[mid] == key)
        {
            ans = mid, low = mid + 1;
        }
        else if (v[mid] > key)
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
pair<int, int> solve(int n, int key, vector<int> v)
{
    int first = getF(v, n, key);
    int second = getS(v, n, key);
    return {first,second};
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