#include <bits/stdc++.h>
using namespace std;
bool ls(vector<int>a,int num){
    for(int i=0;i<a.size();i++){
        if(a[i]==num){
            return true;
        }
    }
    return false;
}
int longestSuccessiveElements(vector<int>a){
    int longest=1;
    for(int i=0;i<a.size();i++){
        int x=a[i];
        int cnt=1;
        while(ls(a,x+1)==true){
            x=x+1;
            cnt=cnt+1;
        }
        longest=max(longest,cnt);
    }
    return longest;
}
int main(){
    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestSuccessiveElements(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}
