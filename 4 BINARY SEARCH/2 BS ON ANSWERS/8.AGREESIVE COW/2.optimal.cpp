#include <bits/stdc++.h>
using namespace std;

bool maxStallLen(vector<int> &stalls, int gap, int cows)
{
    int cowCount = 1; // First cow is placed
    int start = stalls[0];

    for (int i = 1; i < stalls.size(); i++)
    { // Loop should be `i < stalls.size()`
        if (stalls[i] - start >= gap)
        {
            cowCount++;
            start = stalls[i];
            if (cowCount == cows)
                return true; // Place exactly `k` cows
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    int n = stalls.size();
    int low = 0, high = stalls[n - 1] - stalls[0];
    sort(stalls.begin(), stalls.end());
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (maxStallLen(stalls, mid, k) == true)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high;
}

int main()
{
    vector<int> stalls = {0, 3, 4, 7, 10, 9};
    int k = 4;
    int ans = aggressiveCows(stalls, k);
    cout << "The maximum possible minimum distance is: " << ans << "\n";
    return 0;
}
//o(log(stalls[n - 1] - stalls[0])xo(n)