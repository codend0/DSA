#include <bits/stdc++.h>
using namespace std;

int f(vector<int> &arr, int n) {
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count== 1) {
            return i;
        }
    }
}

int main() {
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4};
    int n = arr.size();
    cout << f(arr, n);
}
