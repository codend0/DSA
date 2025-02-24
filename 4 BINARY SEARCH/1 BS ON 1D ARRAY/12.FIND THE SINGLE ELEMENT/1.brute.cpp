#include <bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int> &arr)
{
    int n = arr.size();
    int xr = 0;
    for (int i = 0; i < n; i++)
    {
        xr ^= arr[i];
    }
    return xr;
}
int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int ans = singleNonDuplicate(arr);
    cout << "The single element is: " << ans << "\n";
    return 0;
}