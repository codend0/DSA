#include <bits/stdc++.h>
using namespace std;
void prime(int n){
    int count =0;
    //tc is O sqrt n
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count++;
            if((n/i)!=i){
                count++;
            }
        }
    }
    if(count==2){
        cout << "YES" << endl;
        }
        else{
            cout<<"NO"<<endl;
        }
}
int main(){
    int n;
    cin >> n;
    prime(n);
}