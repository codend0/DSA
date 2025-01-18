#include<bits/stdc++.h>
using namespace std;
void print(int n){
    for(int i=0;i<n;i++){ 
        for(char ch =('A'+n-1)-i;ch<=('A'+n-1);ch++){ 
              cout<<ch<<" ";
          }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print (n);
}