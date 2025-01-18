#include <bits/stdc++.h>
using namespace std;
void gcd(int n1,int n2){
    int gcd=1;
    int x=min(n1,n2);
    for(int i=x;i>0;i--){
        if(n1%i==0&&n2%i==0){
            cout<<"GCD"<<i<<endl;
            return;
        }
    }    
}
int main(){
    int n1,n2;
    cin >> n1>>n2;
    gcd(n1,n2);
}