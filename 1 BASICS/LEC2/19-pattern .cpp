#include <iostream>
using namespace std;
void print(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        //stars
        for(int j=0;j<2*i;j++){ 
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;

    }
    int iniS=2*n-2;
    for(int i=1;i<=n;i++){
        
        //star
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<iniS;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        iniS-=2;
        cout<<endl;

    }
}

int main(){
    int n;
    cin>>n;
    print(n);
    
}