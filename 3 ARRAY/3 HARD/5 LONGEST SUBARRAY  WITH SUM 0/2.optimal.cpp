#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> a)
{
    int n = a.size();
    unordered_map<int, int> mpp; // Stores prefix sum and its index
    int maxl = 0, sum = 0; // Initialize max length and sum
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum == 0) // If sum is 0, max length is i+1
        {
            maxl = i + 1;
        }
        else
        {
            if (mpp.find(sum) != mpp.end()) // If current sum exists, update max length
            {
                maxl = max(maxl, i - mpp[sum]);
            }
            else // If sum not found, store sum with index
            {
                mpp[sum] = i;
            }
        }
    }
    return maxl;
}

int main()
{
    vector<int> a = {9, -3, 3, -1, 6, -5};
    // Call solve and print result
    cout << solve(a) << endl;
    
    return 0;
}
// Time Complexity: O(n), Space Complexity: O(n)
