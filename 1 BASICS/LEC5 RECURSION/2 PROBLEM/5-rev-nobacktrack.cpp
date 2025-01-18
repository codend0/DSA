#include<bits/stdc++.h>
using namespace std;
void print (int i,int n ){
    if(i>=n)return;
    i++;
    print(i,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    print (0,n);
}