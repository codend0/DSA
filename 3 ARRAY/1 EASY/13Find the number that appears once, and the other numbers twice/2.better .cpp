#include <bits/stdc++.h>
using namespace std;

void f(vector<int> &arr , int n){
    vector<int> hash((n+1)/2,0);
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<hash.size();i++){
        if(hash[arr[i]]==1){
            cout<<i;
        }
    }
}

int main(){
    vector <int> arr={1,1,2,3,3,4,4};
    int n = arr.size();
    f(arr,n);
}