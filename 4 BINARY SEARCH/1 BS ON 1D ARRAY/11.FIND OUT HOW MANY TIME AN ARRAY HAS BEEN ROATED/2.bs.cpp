#include <bits/stdc++.h>
using namespace std;
int findKRotation(vector<int> arr, int n)
{
    int index = -1,ans=INT_MAX;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[low] <= arr[high])
        {
            if(arr[low]<ans){
                index=low;
                ans=arr[low];
            }
            break;
        }
        if (arr[low] <= arr[mid])
        {
            if(arr[low]<ans){
                index=low;
                ans=arr[low];
            }
            low=mid+1;
        }
        else if (arr[mid] <= arr[high])
        {
            if(arr[mid]<ans){
                index=mid;
                ans=arr[mid];
            }
            else{
                high=mid-1;
            }
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