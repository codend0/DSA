#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    //precompute
    int hash[13]={0};//ek extra lete hai jab bhi lete hai for example we are taking it for 12 so we will take it 13 +1
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<hash[number]<<endl;
    }
    return 0;
}