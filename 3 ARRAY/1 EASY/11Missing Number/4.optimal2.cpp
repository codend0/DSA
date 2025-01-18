#include <bits/stdc++.h>
using namespace std;
//using property of xor that is 1^1=0
void f(int arr[], int n) {
    int xor1 = 0, xor2 = 0;
    int m = n - 1; // m is for the index looping of arr
    for (int i = 0; i < m; i++) {
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i + 1);
    }
    xor1 = xor1 ^ n;
    cout << (xor1 ^ xor2);
}
int main() {
    int n = 5;
    int arr[] = {1, 2, 3, 5}; // Ensure one number is missing from 1 to n
    f(arr, n);
}
