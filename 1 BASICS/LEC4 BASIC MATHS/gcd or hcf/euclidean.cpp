#include <bits/stdc++.h>
using namespace std;
int gcd(int n1,int n2){
    while(n1>0 && n2>0){//jab tak ya to n1 ya n2 zero nahi hoga
        if(n1>n2){//phele wala bada
            n1=n1%n2;
        }
        else{
            n2=n2%n1;
        }
        if(n1==0){//agar n1 zero ho gaya to n2 ans hai
            return n2;
        }
        return n1;//nahi to n1
    }
}
int main(){
    int n1,n2;
    cin >> n1>>n2;
    int ans=gcd(n1,n2);
    cout << ans << endl;
}