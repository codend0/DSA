#include<iostream>
using namespace std;
void  str(string s){
    s[0]='t';
    cout<<s<<endl;
}
int main(){
    string s="raj";
    str(s);
    cout<<s;
}