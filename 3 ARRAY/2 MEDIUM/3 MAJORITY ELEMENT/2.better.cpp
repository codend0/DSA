#include <bits/stdc++.h>
using namespace std;
int max(int arr[],int n){
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second>n/2){
            return it.first ;
        }
    }
    return -1;
}
int main(){
    int arr[]={2, 2, 1, 1, 1, 2, 2};
    int n=size(arr);
    cout<<max(arr,n);
    return 0;
}