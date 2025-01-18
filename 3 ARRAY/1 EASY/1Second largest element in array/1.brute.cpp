#include <bits/stdc++.h>
using namespace std;
void sort(vector<int>&arr,int n){
    sort(arr.begin(),arr.end());
    cout<<arr[arr.size()-2];
}
int main(){
    vector<int >arr={5,32,78,4,54,1,3};
    int n=arr.size();
    sort(arr,n);
}
//this is brute approach it is of time complexity 0(nlogn) sort direct function use karne ki jagha hum merge ya quick sort istamal kar sakte hai