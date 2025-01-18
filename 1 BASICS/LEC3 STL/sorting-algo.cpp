#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second)return true;
    if(p1.second>p2.second)return false;
    if(p1.first<p2.first)return true;
    return false;

}
int main(){
    //vector<int>it={1,2,3,4,5};
    //sort(a,a+n);
    //sort(it.begin(),it.end());
    //sort(a+2,a+4);
    //how to sort in greater order?
    //sort(a,a+n,greater<int>);
    
    pair<int,int>a[]={{1,2},{2,1},{4,1}};
    sort(a,a+n,comp);

int num =2;
int cnt =__builtin_popcount();


string s = "123";
sort(s.brgin(),s.end());
do{
    cout<<s<<endl;

}while(next_permutation(s.begin(),s.end()));

int maxi=*max_element(a,a+n);

}
