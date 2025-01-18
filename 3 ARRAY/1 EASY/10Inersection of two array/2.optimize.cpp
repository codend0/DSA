#include <bits/stdc++.h>
using namespace std;

vector <int> intersection(vector < int > A ,vector <int> B){
    vector < int > ans;
    int i = 0 , j = 0 ;
    int n = A.size();
    int m = B.size();
    while(i < n && j < m){
        if (A[ i ] < B[ j ]){
            i++;
            }
        
        else if(A[ i ] > B[ j ]){
            j++;
            }
        
        else if (A[ i ] == B[ j ]){
            ans.push_back(A[ i ]);
            i++;
            j++;
        }
    }
    return ans;
}

int main(){
    vector<int> A = {1, 2, 3, 3, 4, 5, 6, 7};
    vector<int> B = {3, 3, 4, 4, 5, 8};
    vector<int> ans = intersection(A, B);
    for  (auto it: ans ){
        cout << it << " ";
    }

}