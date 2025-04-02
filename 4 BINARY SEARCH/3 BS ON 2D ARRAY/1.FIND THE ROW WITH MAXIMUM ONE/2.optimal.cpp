#include <bits/stdc++.h>
using namespace std;
int lowerBound(vector<int> ans, int m, int k)
{
    int low = 0;
    int high = m - 1;
    int store = m;
    while (low <= high)
    {
        int mid = low + high / 2;
        if (ans[mid] == k)
        {
            store = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return store;
}
int rowWithMax1s(vector<vector<int>> matrix, int n, int m)
{
    int max = 0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        int len = m - lowerBound(matrix[i], m, 1);
        if (len > max)
        {
            ans = i;
            max = len;
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {0, 0, 1}, {0, 0, 0}};
    int n = 3, m = 3;
    cout << "The row with maximum no. of 1's is: " << rowWithMax1s(matrix, n, m) << '\n';
}
// nlog(m)