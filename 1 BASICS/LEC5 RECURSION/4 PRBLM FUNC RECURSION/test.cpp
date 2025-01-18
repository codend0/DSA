// #include <bits/stdc++.h>
// using namespace std;
// void f(int i,int a[],int n){
//     if(i>=n/2)return;
//     swap(a[i],a[n-i-1]);
//     f(i+1,a,n);
// }
// int main(){
//     int n;
//     cin >> n;
//     int a[n];
//     for(int i=0;i<n;i++)cin>>a[i];
//     f(0,a,n);
//     for(int i=0;i<n;i++)cout<<a[i];
// }
#include <bits/stdc++.h>
using namespace std;
bool f(int i,string &s){//because we want to change the value not its copy so we will make it reference
if(i>=s.size()/2)return true;

}
int main(){
    string s;
    cin>>s;
    f(0,s);
    return 0;
    }