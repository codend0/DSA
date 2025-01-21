#include <bits/stdc++.h>
using namespace std;

// Function to calculate the n-th row of Pascal's Triangle
vector<int> printRow(int n)
{
    vector<int> aq; // Vector to store the n-th row
    long long a = 1; // Initialize the first element of the row as 1
    aq.push_back(a); // Add the first element to the vector

    // Loop to calculate the remaining elements of the row
    for (int i = 0; i < n - 1; i++)
    {
        // Compute the next element using the combination formula
        a = a * (n - i - 1);
        a = a / (i + 1);
        aq.push_back(a); // Add the calculated element to the vector
    }
    return aq; // Return the complete row
}

int main()
{
    int n;
    cin >> n; // Input the row number (1-based index)
    
    // Get the n-th row of Pascal's Triangle
    vector<int> aq = printRow(n);
    
    // Print the elements of the row
    for (auto it : aq)
    {
        cout << it << " ";
    }
}
