#include <bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int> &arr)
{
    int n = arr.size();
    if (n == 1)
    {
        return arr[0];
    }
    if (arr[0] != arr[1])
    {
        return arr[0];
    }
    if (arr[n - 1] != arr[n - 2])
    {
        return arr[n - 1];
    }
    int low = 1, high = n - 2;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1])
        {
            return arr[mid];
        }
        // if we are on left part of the single element the first one is on even index and second one is on odd
        // left part so we skip that part because that part not gonna have my answer
        // left part(even,odd)
        if ((mid % 2 == 0 && arr[mid] == arr[mid + 1]) || (mid % 2 == 1 && arr[mid] == arr[mid - 1]))
        {
            low = mid + 1;
        }
        // right part (odd,even)
        else if ((mid % 2 == 0 && arr[mid] == arr[mid - 1]) || (mid % 2 == 1 && arr[mid] == arr[mid + 1]))
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int ans = singleNonDuplicate(arr);
    cout << "The single element is: " << ans << "\n";
    return 0;
}