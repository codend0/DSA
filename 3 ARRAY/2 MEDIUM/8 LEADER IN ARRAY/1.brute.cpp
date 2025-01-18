#include <bits/stdc++.h>
using namespace std;

vector<int>printLeadersBruteForce(int arr[],int n){
    vector<int>A;
    for(int i=0;i<n;i++){
        bool value=true;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                value=false;
                break;
            }
        }
        if(value){
            A.push_back(arr[i]);
        }
    }
    return A;
}
int main(){
    int n = 6;
    int arr[n] = {10, 22, 12, 3, 0, 6};
    vector<int> ans = printLeadersBruteForce(arr,n);
  
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}