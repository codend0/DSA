#include<bits/stdc++.h>
using namespace std;
void print(int n){
    for(int i=n;i>0;i--){ 
        char letter='A';
        for(int j=0;j<=i;j++){
            cout<<letter++<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print (n);
}