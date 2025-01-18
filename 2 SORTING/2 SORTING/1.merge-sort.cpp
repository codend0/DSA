#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}
void mergesort(vector<int>& arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2; // Corrected calculation of mid
    mergesort(arr, low, mid); // left part
    mergesort(arr, mid + 1, high); // right part
    merge(arr, low, mid, high); // merging sorted values
}

int main() {
    vector<int> arr = {4,1,3,9,7};
    int n = arr.size(); 
    mergesort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i]; 
        if (i < n - 1) cout << " "; 
    }
    cout << endl;
    return 0;
}