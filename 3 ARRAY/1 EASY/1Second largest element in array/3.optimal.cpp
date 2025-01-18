#include<bits/stdc++.h>
using namespace std;
void largest(vector<int>&arr){
    int n = arr.size();
    int l=arr[0];
    int sl=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>l){
            sl=l;
            l=arr[i];
        }
        else if(arr[i]>sl){
            sl=arr[i];
        }
    }
    cout<<sl<<endl;
}

int main(){
    vector<int>arr={3,342,23,42,34,2,4 };
    largest(arr);
}
//the time complexity is O(n) and space complexity is O(1)