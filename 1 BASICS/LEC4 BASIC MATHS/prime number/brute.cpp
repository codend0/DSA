#include <bits/stdc++.h>
using namespace std;
void prime(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count+=1;
        }   
    }
    if(count==2){
        cout<<"no. is prime";
    }
    else{
        cout<<"no. is not prime";
    }
}
int main(){
    int n;
    cin >> n;
    prime(n);
}