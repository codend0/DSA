#include <bits/stdc++.h>
using namespace std;

int upper_bound(vector<int> &ans, int mid)
{
    int n = ans.size();
    int low = 0;
    int high = n - 1;
    int store = n; // it shoudld be n for case in which all are lesser

    while (low <= high)
    {
        int middle = (low + high) / 2;
        if (ans[middle] > mid)
        {
            store = middle;
            high = middle - 1;
        }
        else
        {
            low = middle + 1;
        }
    }
    return store;
}

int check(int req, int mid, vector<vector<int>> &matrix)
{
    int cnt = 0;
    for (int i = 0; i < matrix.size(); i++)
    {
        cnt += upper_bound(matrix[i], mid);
    }
    return cnt;
}

int min_el(vector<vector<int>> &matrix, int n)
{
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        ans = min(ans, matrix[i][0]);
    }
    return ans;
}

int max_el(vector<vector<int>> &matrix, int n, int m)
{
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, matrix[i][m - 1]);
    }
    return ans;
}

int median(vector<vector<int>> &matrix, int n, int m)
{
    int low = min_el(matrix, n);
    int high = max_el(matrix, n, m);
    int req = (m * n) / 2;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int number = check(req, mid, matrix);

        if (number > req)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4, 5},
        {8, 9, 11, 12, 13},
        {21, 23, 25, 27, 29}};
    int n = matrix.size(), m = matrix[0].size();
    int ans = median(matrix, n, m);
    cout << "The median element is: " << ans << endl;
    return 0;
}

//TC O(log(max - min) * n * log m)
