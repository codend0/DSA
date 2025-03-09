#include <bits/stdc++.h>
using namespace std;

bool maxStallLen(vector<int> &stalls, int gap, int cows) {
    int cowCount = 1;  // First cow is placed
    int start = stalls[0];

    for (int i = 1; i < stalls.size(); i++) {  // Loop should be `i < stalls.size()`
        if (stalls[i] - start >= gap) {
            cowCount++;
            start = stalls[i];
            if (cowCount == cows) return true;  // Place exactly `k` cows
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k) {
    int n = stalls.size();
    sort(stalls.begin(), stalls.end());
    int limit = stalls[n - 1] - stalls[0];

    for (int i = 1; i <= limit; i++) {
        if (!maxStallLen(stalls, i, k)) {
            return i - 1;
        }
    }
    return limit;
}

int main() {
    vector<int> stalls = {0, 3, 4, 7, 10, 9};
    int k = 4;
    int ans = aggressiveCows(stalls, k);
    cout << "The maximum possible minimum distance is: " << ans << "\n";
    return 0;
}
//o(stalls[n - 1] - stalls[0])xo(n)
