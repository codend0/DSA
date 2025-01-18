#include <bits/stdc++.h>
using namespace std;
//using concept of sumation
void f(int arr[],int n){
    int sum=(n*(n+1))/2;
    int sum2=0;
    for (int i=0;i<n;i++){
        sum2+=arr[i];
    }
    cout << sum-sum2;
}
int main(){
    int n=5;
    int arr[]={1,2,3,5};
    f(arr,n);
}
//TC IS O(n) and SC O(1)