#include <bits/stdc++.h>
using namespace std;
int palindrom(int n){
    int rev=0;
    while(n>0){
        rev=rev*10+n%10;
        n/=10;
    }
    if(rev==n){
        cout<<"it is palindrom";
    }
    else{
        cout<<"it is not palindrom";
    }

}
int main(){
    int n;
    cin >> n;
    int k=palindrom(n);
    
}