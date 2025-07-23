#include <bits/stdc++.h>
using namespace std;
#define pb push_back
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
    vector<int>arr;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            if(isPrime(i)){
                arr.pb(i);
            }
        }
    }
    for(auto it:arr){
        cout<<it<<endl;
    }
    return 0;
}