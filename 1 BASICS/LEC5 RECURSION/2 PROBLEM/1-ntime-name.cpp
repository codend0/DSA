#include <bits/stdc++.h>
using namespace std;

int count = 0; 

void solve(int i,int n) {
    if (i>n) { 
        return; 
    }
    cout<<"aniketh"<<" "; 
    i++;
    solve(i,n); 
}

int main() {
    int n;
    cin >> n; 
    solve(1, n); 
    return 0;
}