#include <bits/stdc++.h>
using namespace std;
int findPeakElement(vector<int> &arr) {
    int n=arr.size();
    if(n==1)return 0;
    if(arr[0]>arr[1])return 0
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
    int ans = findPeakElement(arr);
    cout << "The peak is at index: " << ans << "\n";
    return 0;
}

