#include <bits/stdc++.h>
using namespace std;

pair<int, int> f(vector<int> arr, int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                return {i, j}; // Return a pair of indices
            }
        }
    }
    return {-1, -1}; // If no pair is found
}

int main() {
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;

    pair<int, int> result = f(arr, n, target);
    cout<<result.first<<" "<<result.second;

    return 0;
}
