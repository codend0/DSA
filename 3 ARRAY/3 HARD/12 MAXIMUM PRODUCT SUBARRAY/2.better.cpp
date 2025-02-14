#include <bits/stdc++.h>
using namespace std;
int maxProductSubArray(vector<int>arr){
    int n=arr.size();
    int maxprdt=INT_MIN;
    for(int i=0;i<n;i++){
        int prdt=1;
        for(int j=i;j<n;j++){
            prdt*=arr[j];
            maxprdt=max(maxprdt,prdt);
        }
    }
    return maxprdt;
}
int main(){
    vector<int> arr = {1, 2, -3, 0, -4, -5};
    cout << "The maximum product subarray is: "
         << maxProductSubArray(arr) << "\n";
    return 0;
}