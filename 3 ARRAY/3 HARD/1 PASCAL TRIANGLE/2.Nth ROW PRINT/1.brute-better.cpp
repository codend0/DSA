#include <bits/stdc++.h>
using namespace std;

// Function to calculate the element at a specific position in Pascal's Triangle
int element(int r, int c)
{
    long long ans = 1;
    for (int i = 0; i < c; i++)
    {
        ans = ans * (r - i); // Multiply by the next numerator
        ans = ans / (i + 1); // Divide by the next denominator
    }
    return ans;
}

// Function to compute and return a specific row of Pascal's Triangle
vector<int> printRow(int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        ans.push_back(element(n - 1, i)); // Calculate each element in the row
    }
    return ans;
}

int main()
{
    cout << "Enter the row you want to print:" << endl;
    int n;
    cin >> n;                      // Input the row number
    vector<int> ans = printRow(n); // Get the row from Pascal's Triangle
    for (auto it : ans)
    {
        cout << it << " "; // Print each element in the row
    }
    return 0;
}
