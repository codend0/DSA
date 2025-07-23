#include <bits/stdc++.h>
using namespace std;
#define pb insert
bool isPrime(int n){
    if(n<=1)return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    set<int>arr;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            if(isPrime(i)){
                arr.pb(i);
            }
            if(n/i!=i){
                if(isPrime(n/i)){
                    arr.pb(n/i);
                }
            }
        }
    }
    if (isPrime(n)) arr.pb(n);
    for(auto it:arr){
        cout<<it<<endl;
    }
    return 0;
}