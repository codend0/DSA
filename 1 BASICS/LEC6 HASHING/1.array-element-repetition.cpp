#include <bits/stdc++.h>
using namespace std;

int countRepetitions(int arr[], int n, int target) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    //array size le lia 
    int arr[n];
    //enter the array
    cout << "Enter array elements: ";
    //loop fo reading input 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int target;
    cout << "Enter element to count: ";
    cin >> target;
    
    int repetitions = countRepetitions(arr, n, target);
    cout << "Repetitions of " << target << ": " << repetitions << endl;
    
    return 0;
}