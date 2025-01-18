#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int n,int arr[]){
    if(n==1)return;
    for (int j = 0; j <= n - 2; j++) {
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }
    bubbleSort(n-1,arr);
}
int main(){
     int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
    cin >> arr[i];}
    bubbleSort(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}