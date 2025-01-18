#include<bits/stdc++.h>
using namespace std;

bool ls(vector<int>&arr,int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return true;
        }
    }
    return false;
}

int main(){
    vector<int>arr={1,3,4,14,41};
    int n=arr.size();
    int k;
    cin>>k;
    cout<<ls(arr,n,k);
}