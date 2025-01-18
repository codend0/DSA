#include <bits/stdc++.h>
using namespace std;
void print (int i,int n){
    if(i<1)return;
    i--;
    print(i,n);
    //backtrack
    cout<<i<<" ";
}
int main(){
    int n;
    cin >> n;
    print (n,n);
}