#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    //precompute
    unordered_map<char,int>mpp;//unorderd map is better to use if unnorderd map give time exceded error then use map 
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
        }

    int q;
    cin>>q;
    while(q-->0){
        char t;
        cin>>t;
        cout<<mpp[t]<<endl;
    }
}