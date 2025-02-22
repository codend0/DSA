#include <bits/stdc++.h>
using namespace std;
bool search(vector<int> &arr, int k)

{
    int n = arr.size();
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == k)
            return true;
        if (arr[low] == arr[mid]&&arr[mid] == arr[high])
        {
            low++, high--;
            continue;
        }
        if (arr[low] <= arr[mid])
        {
            if (k >= arr[low] && k <= arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else if (arr[mid] <= arr[high])
        {
            if (k >= arr[mid] && k <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return false;
}
int main()
{
    vector<int> arr = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    int k = 3;
    bool ans = search(arr, k);
    if (ans == true)
        cout << "Target is  present.\n";
    else
        cout << "Target is not present.\n";
    return 0;
}
//TC IS O(nlogn)