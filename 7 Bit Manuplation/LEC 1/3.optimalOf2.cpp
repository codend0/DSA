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

            
            int main() {
                ios::sync_with_stdio(0);
                cin.tie(0);
                int t;
                cin >> t;
                while (t--) {
                    int n;
                    cin>>n;
                    int cnt=0;
                    while(n!=0){
                        cnt++;
                        n=n&(n-1);
                    }
                    cout<<cnt<<endl;
        }
        return 0;
            }
            