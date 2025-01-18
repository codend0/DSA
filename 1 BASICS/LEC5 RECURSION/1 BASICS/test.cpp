#include <bits/stdc++.h>
using namespace std;
int cnt=0;
void print(int n){
    if(cnt==n+1)return;//BASE CASE
    cout<<cnt<<endl;
    cnt++;
    print(n);
}
int main(){
    int n;
    cin >> n;
    print(n);
}