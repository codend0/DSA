#include <bits/stdc++.h>
using namespace std;
vector<int> printLeadersBruteForce(int arr[], int n)
{
    int maxcount = INT_MIN;
    vector<int> ans;
    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i] > maxcount)
        {
            ans.push_back(arr[i]);
            maxcount = arr[i];
        }
    }
    return ans;
}
int main()
{
    int n = 6;
    int arr[n] = {10, 22, 12, 3, 0, 6};
    vector<int> ans = printLeadersBruteForce(arr, n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}