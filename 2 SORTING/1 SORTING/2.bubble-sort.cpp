#include <bits/stdc++.h>
using namespace std;
void  bubbleSort(int n,int arr[]){
    for(int i=n-1;i>=0;i--){//code ko hume 0 se n-1 fir 0 se n-2 to  ye loop n-1 ko n-2 aur fir n-3...
    int didSwap=0;//for if it is sorted already the loop will terminate
        for(int j=0;j<=i-1;j++){//ye 0 se i-1 kuki last wala check kisse se check karege
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didSwap=1;
            }
        }
        if(didSwap==0)break;//it give best time complexity of 0(n)
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
    cin >> arr[i];}
    bubbleSort(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}