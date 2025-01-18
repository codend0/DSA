#include<bits/stdc++.h>
using namespace std;
void print(int n){
    int start=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<start++<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print (n);
}