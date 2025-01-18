#include <bits/stdc++.h>
using namespace std;

int optimal(int arr[], int n) {
    if (n == 0) return 0; 
    int i = 0;
    for (int j = 1; j < n; j++) { 
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];//it store new value
        }
    }
    return i + 1;
}

int main() {
    int arr[] = {1, 1, 1, 2, 2, 3, 3};
    int n = size(arr); 
    int newSize = optimal(arr, n); 
    for (int i = 0; i < newSize; i++) { 
        cout << arr[i] << " ";
    }
    cout << endl; 
    return 0;
}