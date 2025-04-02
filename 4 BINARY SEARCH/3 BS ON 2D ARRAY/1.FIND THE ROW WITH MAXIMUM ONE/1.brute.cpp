#include <bits/stdc++.h>
using namespace std;
int rowWithMax1s(vector<vector<int>> matrix, int n, int m)
{
    int maxcount = 0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 1)
            {
                count++;
            }
        }
        if (count > maxcount)
        {
            ans = i;
            maxcount = count;
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
//O(n*m)