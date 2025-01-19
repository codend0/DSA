#include <iostream>
#include <vector>
using namespace std;

vector<int> printSpiral(vector<vector<int>> arr)
{
    int n = arr.size();
    int m = arr[0].size();
    vector<int> a;
    int left = 0, right = m - 1, top = 0, bottom = n - 1;

    while (left <= right && top <= bottom)
    {
        for (int i = left; i <= right; i++)
        {
            a.push_back(arr[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            a.push_back(arr[i][right]);
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                a.push_back(arr[bottom][i]);
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                a.push_back(arr[i][left]);
            }
            left++;
        }
    }
    return a;
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4},
                               {5, 6, 7, 8},
                               {9, 10, 11, 12},
                               {13, 14, 15, 16}};
    vector<int> ans = printSpiral(arr);
    for (int el : ans)
    {
        cout << el << " ";
    }
    cout << endl;
    return 0;
}
