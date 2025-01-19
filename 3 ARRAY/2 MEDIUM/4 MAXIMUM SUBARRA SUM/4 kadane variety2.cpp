// Kadanes algorithm
#include <bits/stdc++.h>
using namespace std;
void max(int arr[], int n)
{

    int sum = 0;
    int maxsum = INT_MIN;
    int start = -1, end = -1;

    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
            start = i; // jaha pe sum 0 hua wo starting index hai subarray ka
        sum += arr[i];

        if (sum > maxsum)
        {
            maxsum = sum;
            end = i; // jaha sum exceed maxsum is the end index
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    // printing the subarray
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = size(arr);
    max(arr, n);
}
// TC O(n) and SC is O(1)