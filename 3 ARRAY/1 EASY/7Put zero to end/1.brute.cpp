#include <bits/stdc++.h>
using namespace std;
void f(vector<int>&arr,int n){
    if(n==0)return;
    vector<int>temp;
    //storing non zero value in temp
    for(int i=0;i<n;i++){//Tc is O(n)
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }

    //putting non zero value in front of zero value
    for(int i=0; i<temp.size();i++){//Tc is O(n)
        arr[i]=temp[i];
    }

    int nz=temp.size();

    //putting zero value at the end of array
    for(int i=nz;i<n;i++){//TC is O(n-n)
        arr[i]=0;
    }
}
//SC is O(n)


int main(){
    vector<int>arr={0,1,2,3,4,0,23,32,0,1,0};
    int n=arr.size();
    f(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
}