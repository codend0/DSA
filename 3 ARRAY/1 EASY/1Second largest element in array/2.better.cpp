#include<bits/stdc++.h>
using namespace std;
void largest(vector<int>&arr){
    int n = arr.size();
    int l=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>l){
            l=arr[i];
        }
    }
    int sl=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>sl&&arr[i]!=l){
            sl=arr[i];
        }
    }
    cout<<sl<<endl;
}
int main(){
    vector<int>arr={3,342,23,42,34,2,4 };
    largest(arr);
}
//the time complexity of this code is 0(2n)