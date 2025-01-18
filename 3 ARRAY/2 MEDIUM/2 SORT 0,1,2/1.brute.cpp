#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={0,1,2,1,2,0};
    int n= size(arr);
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    
}