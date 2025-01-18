#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    //precompute
    //******for lower case******
    // int hash[26]={0};
    // for(int i=0;i<s.size();i++){
    //     hash[s[i]-'a']+=1;//char-a give ascii value of char
    // }

    // int q;
    // cin>>q;
    // while(q-->0){
    //     char c;
    //     cin>>c;

    //     //fetch
    //     cout<<hash[c-'a']<<endl;
    // }
    //******for upper case
    // int hash[26]={0};
    // for(int i=0;i<s.size();i++){
    //     hash[s[i]-'A']+=1;//char-a give ascii value of char
    // }

    // int q;
    // cin>>q;
    // while(q-->0){
    //     char c;
    //     cin>>c;
    //     //fetch
    //     cout<<hash[c-'A']<<endl;
    // }
    //******for both
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]+=1;//char-a give ascii value of char
    }

    int q;
    cin>>q;
    while(q-->0){
        char c;
        cin>>c;

        //fetch
        cout<<hash[c]<<endl;
    }
}