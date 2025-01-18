#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the age :";
    cin>>n;
    if(n<18){
        cout<<"too young go and study";
    }
    else if(n<=57){//else if means if it donot work go to else but if this condition is true
        cout<<"eligible for job";
        if(n>=54){
            cout<<", you are near to retirement";
        }
    }
    else{
        cout<<"too old go and rest";
    }
    return 0;
        
        
}