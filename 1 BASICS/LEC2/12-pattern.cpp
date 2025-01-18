#include <bits/stdc++.h>
using namespace std;
void print(int n){
    int space =2*(n-1);  
    for(int i=1;i<=n;i++){
        //number
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        //number
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
        space=space-2;
    }
}
int main(){
    int n;
    cin>>n;
    print (n);
}