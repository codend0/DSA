#include <bits/stdc++.h>
using namespace std;
void fact(int i,int prdt){
    if(i<1){
        cout<<prdt<<endl;
        return;
    }
    fact(i-1,prdt*i);
}
int main(){
    int n;
    cin >> n;
    fact(n,1);
}