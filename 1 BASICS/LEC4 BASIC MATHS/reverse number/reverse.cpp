#include <bits/stdc++.h>
using namespace std;
        int reverseInteger(int x) {
  int rev = 0;
  bool isNegative = x < 0; 

  if (isNegative) {
    x = -x; 
  }

  while (x > 0) {
    int lastDigit = x % 10;
    rev = (rev * 10) + lastDigit;
    x = x / 10;
  }

  if (isNegative) {
    return -rev; 
  } else {
    return rev;
  }
}

int main(){
    int x;
    cin >> x;
    int k=reverseInteger(x);
    cout << k << endl;
}