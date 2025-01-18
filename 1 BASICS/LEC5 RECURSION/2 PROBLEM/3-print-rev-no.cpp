#include <bits/stdc++.h>
using namespace std;
void solve(int i,int n) {
    if(i<=0)return;
    cout<<i<<" ";
    i--;
    solve(i,n);
    
}
int main(){
    int n;
    cin>>n;
    solve(n,n);
}