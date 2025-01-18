#include <bits/stdc++.h>
using namespace std;

void test(int n1, int n2) {
    int gcd = 1; 
    for (int i = 1; i <= min(n1, n2); i++) { 
        if (n1 % i == 0 && n2 % i == 0) { 
            gcd = i; 
        }
    }
    cout << "GCD: " << gcd << endl; 
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    test(n1, n2); 
    return 0; 
}