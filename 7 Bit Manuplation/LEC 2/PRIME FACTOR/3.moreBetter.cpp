#include <bits/stdc++.h>
using namespace std;
#define pb insert
int main(){
    int n;
    cin>>n;
    set<int>arr;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            arr.pb(i);
        }
        while(n%i==0){
            n=n/i;
        }
    }
    for(auto it:arr){
        cout<< it<<endl;
    }
    return 0;
}