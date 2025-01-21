#include <bits/stdc++.h>
using namespace std;

// Function to calculate the n-th row of Pascal's Triangle
vector<int> printRow(int row)
{
    vector<int> aq; // Vector to store the n-th row
    long long a = 1; // Initialize the first element of the row as 1
    aq.push_back(a); // Add the first element to the vector

    // Loop to calculate the remaining elements of the row
    for (int i = 0; i < row - 1; i++)
    {
        // Compute the next element using the combination formula
        a = a * (row - i - 1);
        a = a / (i + 1);
        aq.push_back(a); // Add the calculated element to the vector
    }
    return aq; // Return the complete row
}
vector<vector<int>> print(int n){
    vector<vector<int>>ans;
    for(int i=1;i<=n;i++){
        ans.push_back(printRow(i));//storing each row 
    }
    return ans;
}

int main()
{
    int n;
    cin >> n; 
    vector<vector<int>>ans = print(n);
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
