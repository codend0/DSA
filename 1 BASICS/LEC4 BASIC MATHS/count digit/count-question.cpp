#include <bits/stdc++.h>
using namespace std;
int evenlyDivides(int n){
    int count = 0; 
    for (int i = 0; i < n; i++) { 
        int digit=n%10; 
        if(n%digit==0&&digit!=0){
            count++;
        }
        n=n/10; 
    }
    return count; 
} 
int main(){
    int n;
    cin >> n;
    int ans=evenlyDivides(n);
    cout<<ans;
}