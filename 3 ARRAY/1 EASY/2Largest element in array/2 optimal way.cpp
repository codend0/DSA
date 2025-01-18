#include <bits/stdc++.h>
using namespace std;
void largest(vector<int>&arr){
    int largest=arr[0];
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<largest<<endl;
}
int main(){
    vector<int>arr={5,32,32,4,54,1,3};
    largest(arr);
}
//this code has a time complexity of 0(n)