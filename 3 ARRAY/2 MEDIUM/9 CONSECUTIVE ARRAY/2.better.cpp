#include<bits/stdc++.h>
using namespace std;
int longestSuccessiveElements(vector<int>a){
    sort(a.begin(),a.end());
    int longest=1;
    int count=1;
    int lastsmaller=INT_MIN;
    for(int i=0;i<a.size();i++){
        if(a[i]-1==lastsmaller){
            count++;
            lastsmaller=a[i];
        }
        else if(a[i]!=lastsmaller){
            count=1;
            lastsmaller=a[i];
        }
        longest=max(longest,count);
    }
    return longest;
}
int main(){
    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestSuccessiveElements(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}