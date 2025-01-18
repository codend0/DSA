#include <bits/stdc++.h>
using namespace std;
void sort(int arr[],int n){
    int zero=0,one=0,two=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)zero++;
        else if(arr[i]==1)one++;
        else if(arr[i]==2)two++;
    }
    for(int i=0;i<zero;i++){
        cout<<"0"<<" ";
    }
    for( int i=zero;i<zero+one;i++){
        cout<<"1"<<" ";
    }
    for(int i=zero+one;i<zero+one+two;i++){
        cout<<"2"<<" ";
    }
    
}
int main(){
    int arr[]={0,1,2,1,2,0,1};
    int n= size(arr);
    sort(arr,n);
}