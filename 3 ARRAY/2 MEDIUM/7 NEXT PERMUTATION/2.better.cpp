#include <bits/stdc++.h>
using namespace std;
vector<int> nextP(vector<int>&A){
    next_permutation(A.begin(),A.end());
    return A;
}
int main(){
    vector<int>A={2, 1, 5, 4, 3, 0, 0};
    vector<int>ans=nextP(A);
    for(auto it:ans){
        cout<<it<<" ";
    }
}