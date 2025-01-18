#include <bits/stdc++.h>
using namespace std;
void  Suma(int i,int sum){
    if(i<0){
        cout<<sum<<endl;
        return ;
    }
    Suma(i-1,sum+i);
}
int main(){
    int n;  
    cin >> n;
    Suma(n,0);
}