#include <bits/stdc++.h>
using namespace std;

// Function to compute the element in Pascal's Triangle
// at the given row (r) and column (c).
int element(int r, int c)
{
    long long ans = 1; // Initialize the result to 1.
    // Loop to calculate the combination (r choose c).
    for (int i = 0; i < c; i++)
    {
        ans = ans * (r - i);   // Multiply by (r - i).
        ans = ans / (i + 1);   // Divide by (i + 1).
    }
    return ans; // Return the computed value.
}

int main()
{
    // Prompt the user to input the row and column.
    cout << "Enter the row & column:" << endl;
    int row, column;
    cin >> row >> column; // Take user input for row and column.

    // Calculate the element at (row - 1, column - 1) in Pascal's Triangle.
    // (1-based indexing is converted to 0-based indexing for computation.)
    int ans = element(row - 1, column - 1);

    // Print the result.
    cout << ans;

    return 0; // Indicate successful program termination.
}
