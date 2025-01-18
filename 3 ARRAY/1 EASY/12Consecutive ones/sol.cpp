#include <bits/stdc++.h>
using namespace std;

void f(int arr[],int n){
    int cnt=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
            maxi=max(maxi,cnt);//maximum of maxi and cnt is gonna be maxi
        }
        else{
            cnt=0;
        }
    }
    cout<<maxi;
}

int main(){
    int arr[]={1,1,0,2,1,1,1,0,1,01,1,1,0,1,01};
    int n=size(arr);
    f(arr,n);
}