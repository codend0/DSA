#include <bits/stdc++.h>
using namespace std;
void f(vector<int>&arr,int n){
    int x=0;
    for(int i=0;i<n;i++){
        x=x^arr[i];
    }
    cout<<x;
}
int main(){
    vector <int> arr={1,1,2,3,3,4,4};
    int n = arr.size();
    f(arr,n);
}