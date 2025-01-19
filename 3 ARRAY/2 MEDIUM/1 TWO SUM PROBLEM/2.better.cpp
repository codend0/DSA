#include <bits/stdc++.h>
using namespace std;
string twoSum(int n, vector<int> arr, int target)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int a = arr[i];       // we take a element
        int rem = target - a; // we by using simple logic target minus what we select give us the remain
        if (mpp.find(rem) != mpp.end())
        { // we check if it there
            return "YES";
        }
        mpp[a] = i; // storing iteration in map
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