#include <bits/stdc++.h>
using namespace std;
//it is a better method because it reduce the time complexity of the code
void divisor(int n){
    vector<int> ls;
    //TC :O(sqrt(n))
    for(int i=1;i*i<=(n);i++){
        if(n%i==0){
            ls.push_back(i);
            if((n/i)!=i){
                ls.push_back(n/i);
            }
    }
}
    //TC  sort take is O(nlogn)
    sort(ls.begin(),ls.end());
    //O(n)
    for(auto it:ls){
        cout<<it<<" ";
    }
    //total TC is O(nlogn) because sorting dominate the others
}
int main(){
    int n;
    cin >> n;
    divisor(n);

}