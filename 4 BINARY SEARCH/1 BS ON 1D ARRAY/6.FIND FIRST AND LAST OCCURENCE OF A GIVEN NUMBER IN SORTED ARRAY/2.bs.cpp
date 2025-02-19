#include <bits/stdc++.h>
using namespace std;
pair<int,int> solve(int n,int key,vector<int>v){
    
}
int main(){
    int n = 7;
    int key = 13;
    vector<int> v = {3, 4, 13, 13, 13, 20, 40};
    // returning the last occurrence index if the element is present otherwise -1
    pair<int, int> ans = solve(n, key, v);
    cout << ans.first << " " << ans.second;
    return 0;
}