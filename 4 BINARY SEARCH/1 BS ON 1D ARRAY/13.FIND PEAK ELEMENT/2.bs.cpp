#include <bits/stdc++.h>
using namespace std;
int findPeakElement(vector<int> &arr)
{
    int n = arr.size();
    if (n == 1)
        return 0;
        //fo decreasing peak
    if (arr[0] > arr[1])
        return 0;
        //for increasing peak
    if (arr[n - 1] > arr[n - 2])
        return n - 1;
    int low = 1, high = n - 2;
    while (low <= high)
    {q
        int mid = (low + high) / 2;
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            return mid;
        }
        // you are on left side of the peak
        if (arr[mid] > arr[mid - 1])
        {
            low = mid + 1;
        }
        //you are on right side
        //you can combine both the below case in one else case of high=mid-1;
        else if (arr[mid] > arr[mid + 1])
        {
            high = mid - 1;
        }
        //for multiple peak go anywhere left or right
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
    int ans = findPeakElement(arr);
    cout << "The peak is at index: " << ans << "\n";
    return 0;
}
//TC is O(logn)