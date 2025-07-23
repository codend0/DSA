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

        string convert(int n){
            string store="";
            while(n){
                if(n%2==1)store.pb('1');
                else store.pb('0');
                n=n/2;
            }
            reverse(all(store));
            return store;
        }
        int main() {
            ios::sync_with_stdio(0);
            cin.tie(0);
            //number to binary 
            int n;
            cin>>n;
            string binary=convert(n);
            cout<<binary<<endl;
            return 0;
        }