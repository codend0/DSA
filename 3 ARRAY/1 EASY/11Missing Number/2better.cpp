#include <bits/stdc++.h>
using namespace std;
void f(int arr[],int n){
    //precompute 
    int hash[n+1]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]=1;
    }

    for(int i=1;i<n;i++){
        if (hash[i]==0){
            cout<<i;
        }
    }
}
int main(){
    int n=5;
    int arr[]={1,2,3,5};
    f(arr,n);
}
//TC IS O(2n)