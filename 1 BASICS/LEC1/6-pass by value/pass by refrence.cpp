#include<iostream>
using namespace std;
void  str(string &s){//just add & sign  to pass by reference
    s[0]='t';
    cout<<s<<endl;
}
int main(){
    string s="raj";//in pass byrefrence it does not take copy it take original
    str(s);
    cout<<s;
    cout<<"aniketh";
}
