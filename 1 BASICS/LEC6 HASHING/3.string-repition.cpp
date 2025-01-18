#include <bits/stdc++.h>
using namespace std;
int f(string s,char ch){
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==ch){
            count++;
            }
        }
        return count;
}
int main(){
    string s;
    cin>>s;
    char ch;
    cin>>ch;
    int ans=f(s,ch);
    cout<<ans<<endl;

}