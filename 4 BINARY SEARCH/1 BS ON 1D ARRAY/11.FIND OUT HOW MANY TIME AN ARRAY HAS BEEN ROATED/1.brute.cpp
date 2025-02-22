#include <bits/stdc++.h>
using namespace std;
int findKRotation(vector<int> arr, int n)
{
    int index = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            index = i;
        }
    }
    return index;
}
int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    int n = arr.size();
    int ans = findKRotation(arr, n);
    cout << "The array is rotated " << ans << " times.\n";
    return 0;
}