#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix)
{
    int n = matrix.size();    // row length
    int m = matrix[0].size(); // col length
    int col0 = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                // marking the row
                matrix[i][0] = 0;
                // marking for column
                if (j != 0)
                {
                    matrix[0][j] = 0;
                }
                else
                {
                    col0 = 0;
                }
            }
        }
    }
    // itterating the remaing part other than marking row and col because of a edge case
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (matrix[i][j] != 0)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
    // for col marked first  because if we try to make row marked 0 first if col0 is 0 it will
    // make the whole row marked 0 and thus effect the col marked
    if (matrix[0][0] == 0)
    {
        for (int j = 1; j < m; j++)
        {
            matrix[0][j] = 0;
        }
    }
    // for row marked
    if (col0 = 0)
    {
        for (int i = 0; i < n; i++)
        {
            matrix[i][0] = 0;
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