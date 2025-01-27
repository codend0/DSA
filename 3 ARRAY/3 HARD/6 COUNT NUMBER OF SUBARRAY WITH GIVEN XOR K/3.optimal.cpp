#include <bits/stdc++.h>
using namespace std;

int subarraysWithXorK(vector<int> a, int k) {
    int n = a.size();
    int cnt = 0, xr = 0;
    unordered_map<int, int> mpp;

    mpp[0] = 1; // To handle cases where prefix XOR itself equals k.

    for (int i = 0; i < n; i++) {
        xr = xr ^ a[i]; // Update the current prefix XOR.

        // Check if there exists a prefix XOR such that `xr ^ k` is in the map.
        cnt += mpp[xr ^ k];

        // Update the frequency of the current prefix XOR in the map.
        mpp[xr]++;
    }
    return cnt;
}

int main() {
    vector<int> a = {4, 2, 2, 6, 4};
    int k = 6;
    int ans = subarraysWithXorK(a, k);
    cout << "The number of subarrays with XOR k is: " << ans << "\n";
    return 0;
}
//TC is O(n) and SC O(1)