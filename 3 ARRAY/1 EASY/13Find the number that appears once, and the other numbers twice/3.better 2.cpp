#include <bits/stdc++.h>
using namespace std;

void f(vector<int> &arr , int n){
    map<int,int>mpp;
    for (int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    //Find the single element and return the answer
    for (auto it:mpp){
        if(it.second==1){
            cout<<it.first;
        }
    }
}

int main(){
    vector <int> arr={1,1,2,3,3,4,4};
    int n = arr.size();
    f(arr,n);
}