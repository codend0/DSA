#include <bits/stdc++.h>
using namespace std;
void print1(int n){
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<" * " ;
        }
        cout<<endl;
    }
    
}
int main(){
    int n;
    cin>>n;
    print1(n);
}