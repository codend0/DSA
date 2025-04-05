#include <bits/stdc++.h>
using namespace std;
int rowindex(vector<vector<int>> &matrix, int col, int n)
{
    int index = 0;
    for (int i = 1; i < n; i++)
    {
        if (matrix[index][col] < matrix[i][col])
        {
            index = i;
        }
    }
    return index;
}
int findPeak(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int low = 0, high = m - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int store = rowindex(matrix, mid, n);
        int maxel = matrix[store][mid];
        int left = (mid - 1 >= 0) ? matrix[store][mid - 1] : -1;
        int right = (mid + 1 < m) ? matrix[store][mid + 1] : -1;
        if (maxel > left && maxel > right)
        {
            return maxel;
        }
        else if (maxel < left)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    vector<vector<int>> matrix = {
        {10, 20, 15},
        {21, 30, 14},
        {7, 16, 32}};
    int ans = findPeak(matrix);
    cout << ans << endl;
    return 0;
    return 0;
}
//O(nlog(m))