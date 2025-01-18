#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> rotate(vector<vector<int>>mat){
    int n=mat.size();
    //because the matrix is a square matrix
    vector<vector<int>>rotated(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            rotated[j][(n-1)-i]=mat[i][j];
        }
    }
    return rotated;
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
//TC is O(n^2) ans SC O(n^2)