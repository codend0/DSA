#include <bits/stdc++.h>
using namespace std;
int maxPageAllocation(vector<int> &arr, int n, int m, int max)
{
    int student = 1;
    long long pageStudent = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageStudent + arr[i] <= max)
        {
            pageStudent += arr[i];
        }
        else
        {
            student++;
            pageStudent = arr[i];
        }
    }
    return student;
}
int findPages(vector<int> &arr, int n, int m)
{
    if (m > n)
        return -1;
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    for (int i = low; i <= high; i++)
    {
        int data = maxPageAllocation(arr, n, m, i);
        if (data == m)
        {
            return i;
        }
    }
    return high;
}
int main()
{
    vector<int> arr = {25, 46, 28, 49, 24};
    int n = 5;
    int m = 4;
    int ans = findPages(arr, n, m);
    cout << "The answer is: " << ans << "\n";
    return 0;
}