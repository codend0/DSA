#include <bits/stdc++.h>
using namespace std;
void slargest(vector<int>&arr){
    int n = arr.size();
    int l=arr[0];
    int sl=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>l){
            sl=l;
            l=arr[i];
        }
        else if(arr[i]>sl&&arr[i]<l){
            sl=arr[i];
        }
    }
    cout<<sl<<endl;
}
void ssmallest(vector<int>&arr){
    int n = arr.size();
    int s=arr[0];
    int ss=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<s){
            ss=s;
            s=arr[i];
            }
        else if (arr[i]<ss&&arr[i]>s){
            ss=arr[i];
        }
    }
    cout<<ss<<endl;
}
int main(){
    vector<int>arr={3,342,23,42,34,2,4 };
    slargest(arr);
    ssmallest(arr);
}