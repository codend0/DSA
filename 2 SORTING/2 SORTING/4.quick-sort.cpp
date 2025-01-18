#include <bits/stdc++.h>
using namespace std;

// Quick Sort Algorithm: 
// 1. Choose a 'pivot' element from the array and partition the other elements into two sub-arrays, 
//    according to whether they are less than or greater than the pivot.
// 2. The sub-array of elements with smaller values will be on the left of the pivot, 
//    and the sub-array of elements with greater values will be on the right.
// 3. Recursively apply the above steps to the sub-arrays of smaller and greater elements.

int par(vector<int>& arr, int low, int high) {
    int pivot = arr[low]; // pivot is iterating to the value of low
    int i = low + 1; // Start from the next element
    int j = high;
    while (i <= j) {
        while (i <= high && arr[i] <= pivot) {
            i++;
        }
        while (j >= low + 1 && arr[j] > pivot) {
            j--; 
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]); // place pivot in the correct position
    return j; // return the index of the pivot
}

void quicksort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pIndex = par(arr, low, high);
        quicksort(arr, low, pIndex - 1);
        quicksort(arr, pIndex + 1, high);
    }
}

int main() {
    vector<int> arr = {4, 1, 3, 9, 7};
    int n = arr.size(); 
    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i]; 
        if (i < n - 1) cout << " "; 
    }
    cout << endl;
    return 0;
}