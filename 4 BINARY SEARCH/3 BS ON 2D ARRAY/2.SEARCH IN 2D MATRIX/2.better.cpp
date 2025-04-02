#include <bits/stdc++.h>
using namespace std;
bool bs(vector<int> ans, int m, int target)
{
    int low = 0, high = m - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (ans[mid] == target)
        {
            return true;
        }
        else if (ans[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return false;
}
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();
    int m = matrix[0].size();
    for (int i = 0; i < n; i++)
    {
        if (matrix[i][0] <= target && matrix[i][m - 1] >= target)
        {
            return bs(matrix[i], m, target);
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    searchMatrix(matrix, 8) == true ? cout << "true\n" : cout << "false\n";
    return 0;
}
// TC is O(n log(m)