#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>arr(n);
    int xr=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        xr^=arr[i];
    }
    int rightmost=(xr&(xr-1))^xr;
    //bucket method
    int b1=0,b2=0;
    for(int i=0;i<n;i++){
        if(rightmost&arr[i]){
            b1^=arr[i];
        }
        else{
            b2^=arr[i];
        }
    }
    cout<<b1<<" "<<b2<<endl;
}