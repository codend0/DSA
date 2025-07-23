        #include <iostream>
        #include <vector>
        #include <algorithm>
        #include <string>
        #include <cmath>
        #include <map>
        #include <set>
        #include <numeric>
        using namespace std;
        typedef long long ll;
        #define pb push_back
        #define all(x) x.begin(), x.end()

        void solve(int n){
            int cnt=0;
            while(n>0){
                if(n&1)cnt++;//n&1 is similar to n%2==1
                n>>1;//n=n/2;
            }
            return cnt;
        }
        int main() {
            ios::sync_with_stdio(0);
            cin.tie(0);
            int n;cin>>n;
            //we are coounting set bit in input
            solve(n);
            return 0;
        }