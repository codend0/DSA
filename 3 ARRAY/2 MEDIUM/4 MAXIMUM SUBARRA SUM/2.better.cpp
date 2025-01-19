#include <bits/stdc++.h>
using namespace std;
void max(int arr[], int n)
{
    int maxsum = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        // so it is basically that we are itterating from i to n so we increase j by one to cal sum
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            maxsum = max(maxsum, sum);
        }
    }
    cout << maxsum;
}
int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = size(arr);
    max(arr, n);
}