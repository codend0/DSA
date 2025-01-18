#include <bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int> A, vector<int> B) {
    vector<int> ans;
    vector<int> rep(B.size(), 0);
    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < B.size(); j++) {
            if (A[i] == B[j] && rep[j] == 0) {
                ans.push_back(A[i]);
                rep[j] = 1;
                break;
            }
            else if (B[j] > A[i]) break; //because array is sorted , element will not be beyond this
        }
    }
    return ans;
}
int main() {
    vector<int> A = {1, 2, 3, 3, 4, 5, 6, 7};
    vector<int> B = {3, 3, 4, 4, 5, 8};
    vector<int> ans = intersection(A, B);
    for (auto it : ans) {
        cout << it << " ";
    }
}