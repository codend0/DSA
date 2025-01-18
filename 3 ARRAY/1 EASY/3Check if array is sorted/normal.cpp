#include <bits/stdc++.h>
using namespace std;
int sorted(vector<int>&arr){
    int n = arr.size();
    int start=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>=start){
            start=arr[i];
        }
        else return 0;
    }
    return 1;
}
int main(){
    vector <int> arr={3,4,5,1,2};
    cout<<sorted(arr);
}
//I did this question with my approach TC:O(n) SC:O(1) an