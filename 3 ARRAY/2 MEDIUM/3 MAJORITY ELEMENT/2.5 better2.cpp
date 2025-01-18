#include <bits/stdc++.h>
using namespace std;
int max(int arr[],int n){
    sort(arr,arr+n);
    return arr[n/2];
}
int main(){
    int arr[]={2, 2, 1, 1, 1, 2, 2};
    int n=size(arr);
    cout<<max(arr,n);
    return 0;
}