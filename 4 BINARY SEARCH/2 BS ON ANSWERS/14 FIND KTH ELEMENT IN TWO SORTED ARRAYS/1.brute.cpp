#include <bits/stdc++.h>
using namespace std;
int kthElement(vector<int>&a,vector<int>&b,int n1,int n2,int k){
    vector<int>c;
    int i=0,j=0;
    while(i<n1&&j<n2){
        if(a[i]<b[j]){
            c.push_back(a[i++]);
        }
        else{
            c.push_back(b[j++]);
        }
    }
    while(i<n1)c.push_back(a[i++]);
    while(j<n2)c.push_back(b[j++]);
    return c[k-1];
}
int main(){
    vector<int> a = {2, 3, 6, 7, 9};
    vector<int> b = {1, 4, 8, 10};
    cout << "The k-ht element of two sorted array is: " <<kthElement(a, b, a.size(), b.size(), 5) << '\n';
    return 0;
}
//TC O(n1+n2) SC O(n1+n2)
