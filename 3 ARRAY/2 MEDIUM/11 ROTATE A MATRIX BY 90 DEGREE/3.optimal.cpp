#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> rotate(vector<vector<int>>mat){
    int n=mat.size();
    //see the logic in copy or notes or lec  because it will cover all element
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
        reverse(mat[i].begin(),mat[i].end());
    }
    return mat;
}
int main(){
    vector<vector<int>>mat={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>>ans=rotate(mat);
    for(auto it:ans){
        for(auto el:it){
            cout<<el<<" ";
        }
        cout<<endl;
    }
    return 0;

}
//TC O(n^2) and SC O(1)