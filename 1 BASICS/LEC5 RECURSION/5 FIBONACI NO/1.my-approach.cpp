#include <bits/stdc++.h>
using namespace std;
void f(int n,int a ,int b){
    int c;
    for(int i=2;i<n;i++){
        c=a+b;
        cout<<" "<<c;
        a=b;
        b=c;
    }

}
int main(){
    int n;
    cin >> n;
    int a=0,b=1;
    cout<<a<<" "<<b;
    f(n,a,b);
}