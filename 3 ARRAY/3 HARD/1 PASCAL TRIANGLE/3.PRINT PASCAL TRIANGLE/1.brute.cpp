#include <bits/stdc++.h>
using namespace std;


int element(int r, int c)
{
    long long ans = 1;
    for (int i = 0; i < c; i++)
    {
        ans = ans * (r - i); 
        ans = ans / (i + 1); 
    }
    return (int) (ans);
}


vector<vector<int>> print(int n)
{
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        vector<int> row;
        for (int j = 0; j <= i; j++)//run this loop till equal to row
        {
            row.push_back(element(i, j));
            
        }
        ans.push_back(row);
    }
    return ans;
}

int main()
{
    cout << "Enter :" << endl;
    int n;
    cin >> n;                           
    vector<vector<int>> ans = print(n); 
    for (auto it : ans)
    {
        for (auto el : it)
        {
            cout << el << " ";
        }
        cout<<endl;
    }
    return 0;
}
