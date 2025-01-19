#include <bits/stdc++.h>
using namespace std;
string twoSum(int n, vector<int> arr, int target)
{
    int left = 0, right = n - 1;
    sort(arr.begin(), arr.end());
    while (left < right)
    {
        if (arr[left] + arr[right] == target)
        {
            return "YES";
        }
        else if (arr[left] + arr[right] < target)
        {
            left++;
        }
        else
            right--;
    }
    return "NO";
}
int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}