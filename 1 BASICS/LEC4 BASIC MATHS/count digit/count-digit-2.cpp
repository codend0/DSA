#include <bits/stdc++.h>
using namespace std;
//second  method of counting digit in this method we just gonna take log and +1
int countDigit(int n){
    int count = log10(n);
    count=count+1;
    return count;
}
int main(){
    int n;
    cin >> n;
    int k=countDigit(n);
    cout<<k<<endl;
}