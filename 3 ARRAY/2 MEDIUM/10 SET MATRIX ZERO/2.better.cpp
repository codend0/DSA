#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix)
{
    int n = matrix.size();    // row length
    int m = matrix[0].size(); // col length
    int rowmarked[n] = {0};
    int colmarked[m] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                rowmarked[i] = 1;
                colmarked[j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (rowmarked[i] || colmarked[j])
            {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}
int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    vector<vector<int>> ans = zeroMatrix(matrix);
    for (auto it : ans)
    {
        for (auto ele : it)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}