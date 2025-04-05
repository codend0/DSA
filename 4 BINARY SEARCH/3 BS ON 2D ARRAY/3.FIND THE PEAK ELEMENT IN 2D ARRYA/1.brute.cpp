// just loop throught the array
#include <bits/stdc++.h>
using namespace std;
bool peak(vector<vector<int>> matrix, int row, int col, int n, int m)
{
    int el = matrix[row][col];
    int left = (col - 1 >= 0) ? matrix[row][col - 1] : -1;
    int right = (col + 1 < m) ? matrix[row][col + 1] : -1;
    int top = (row - 1 >= 0) ? matrix[row - 1][col] : -1;
    int bottom = (row + 1 <n) ? matrix[row + 1][col] : -1;
    if (el > left && el > right && el > top && el > bottom)
    {
        return true;
    }
    return false;
}
int findPeak(vector<vector<int>> matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            bool ans = peak(matrix, i, j, n, m);
            if (ans == true)
            {
                return matrix[i][j];
            }
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
}