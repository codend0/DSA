#include <bits/stdc++.h>
using namespace std;
int amstrong(int n){
    int sum=0;
    int digit=n;
    while(n>0){
        int lastdigit=n%10;
        sum=sum+(lastdigit*lastdigit*lastdigit);
        n=n/10;
    }
    return (digit == sum) ? 1 : 0;
}
int main(){
    int n;
    cin >> n;
    int k=amstrong(n);
    cout<<k;
    return 0;
}