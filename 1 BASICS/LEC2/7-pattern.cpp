#include <iostream>
using namespace std;
void print(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<2*i+1;j++){//phele 1 star  fir 3 fir 5 fir 7 i  
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;

    }
}
int main(){
    int n;
    cin>>n;
    print(n);
}