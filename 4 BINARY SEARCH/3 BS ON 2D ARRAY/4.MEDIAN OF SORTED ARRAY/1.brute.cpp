#include <bits/stdc++.h>
using namespace std;
int median(vector<vector<int>>&matrix,int n,int m){
    vector<int>check;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            check.push_back(matrix[i][j]);
        }
    }
    sort(check.begin(),check.end());
    return check[(m*n)/2];
}
int main(){
    vector<vector<int>> matrix = {
        {1, 2, 3, 4, 5},
        {8, 9, 11, 12, 13},
        {21, 23, 25, 27, 29}
    };
    int n = matrix.size(), m = matrix[0].size();
    int ans = median(matrix, n, m);
    cout << "The median element is: " << ans << endl;
    return 0;
}
//TC O(m*n) and n*mlog(n*m)
//