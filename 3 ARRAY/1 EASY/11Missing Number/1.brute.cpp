#include <bits/stdc++.h>
using namespace std;
void f(int arr[] , int n ){
    for (int i=1 ; i < n ; i++){
        int flag =0;
        for(int j = 0;j<i;j++){
            if(i==arr[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n=5;
    int arr[]={1,2,3,5};
    f(arr,n);
}
//TC IS O(n)