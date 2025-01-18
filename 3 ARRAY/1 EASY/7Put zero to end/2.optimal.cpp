//using two pointer approach
#include <bits/stdc++.h>
using namespace std;

void optimal(vector<int>&arr,int n){
    int j=-1;
    // putting j at zero
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    //if j is -1 then all elements are non zero
    if(j==-1)return;

    // putting i infront of j and swap if i is non zero and increase j++
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[j],arr[i]);
            j++;
        }
    }
}

int main(){
    vector<int>arr={0,1,2,2,0,11,0,01,3,33,0,30,0};
    int n=arr.size();
    optimal(arr,n);
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}
