#include <iostream>
using namespace std;

int main() {
    // Your code here
    //fibonacci sequence
        // int n;
        // cin>>n;
        // int a=0;
        // int b=1;
        // cout<<a<<","<<b;
        // for(int i=3;i<=n;i=i+1){
        //        int c=a+b;
        //        cout<<","<<c;
        //        a=b;//isko  b=a isliye nahi likh  sakte kuki  b a ki value ko store karta hai for eg int a=1 yaha a 1 value le raha hai usi tarah
        //        b=c;
                
        // }
    //factorial
         int n;
         cin>>n;
         int fact =1;
         for(int i=1;i<=n;i++){
            fact=fact*i;
            }
            cout<<fact;
            return 0;
         }
    
