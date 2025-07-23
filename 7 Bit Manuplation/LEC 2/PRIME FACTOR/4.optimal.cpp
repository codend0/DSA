#include <bits/stdc++.h>
using namespace std;
#define pb insert
int main(){
    int n;
    cin>>n;
    set<int>arr;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            arr.pb(i);
        }
        while(n%i==0){
            n=n/i;
        }
    }
    if(n!=1)arr.pb(n);
    for(auto it:arr){
        cout<< it<<endl;
    }
    return 0;
}