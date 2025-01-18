#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<2*i+1;j++){//phele 1 star  fir 3 fir 5 fir 7 i  se relation 
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=n;i>0;i--){
        
        //space
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*i-1;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        cout<<endl;

    }
}