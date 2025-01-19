// Kadanes algorithm
#include <bits/stdc++.h>
using namespace std;
void max(int arr[], int n)
{
    // what we did is we initalize the sum and maxsum with 0
    int sum = 0;
    int maxsum = INT_MIN;
    // next we itterate in array
    for (int i = 0; i < n; i++)
    {
        // we add that
        sum += arr[i];
        maxsum = max(maxsum, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << maxsum << endl;
}
int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = size(arr);
    max(arr, n);
}
// TC O(n) and SC is O(1)