#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){//kuki array me n-2 second last term hoti hai
        int mini=i;
        for(int j=i;j<=n-1;j++){//minimum n-1 yani last term tak kuki minimum check karna hai
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);//swap karna hai
        //isko hi niche aise hi likha hai 
        // int temp=arr[mini];
        // arr[mini]=arr[i];
        // arr[i]=temp;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
