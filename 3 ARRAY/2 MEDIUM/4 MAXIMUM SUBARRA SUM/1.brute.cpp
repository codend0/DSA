#include <bits/stdc++.h>
using namespace std;
void max(int arr[],int n){
    int maxsum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int sum=0;
            for(int k=i;k<j;k++){
                sum+=arr[k];
                maxsum=max(maxsum,sum);
            }
        }
    }
    cout<<maxsum;
}
int main(){
    int arr[]={ -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n=size(arr);
    max(arr,n);
}