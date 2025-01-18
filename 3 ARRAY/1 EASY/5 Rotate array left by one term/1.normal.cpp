#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>&arr,int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int>arr={1,2,3,4,5,6};
    int n=arr.size();
    rotate(arr,n);
}
//TC O(n) and SC O(1) for extra space for algorithm