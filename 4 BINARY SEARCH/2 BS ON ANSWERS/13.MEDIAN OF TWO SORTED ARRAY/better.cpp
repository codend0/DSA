#include <bits/stdc++.h>
using namespace std;
double median(vector<int>a,vector<int>b){
    int n1=a.size();
    int n2=b.size();
    int n=n1+n2;
    int ind2=n/2;
    int ind1=n/2-1;
    int cnt=0;
    int ind1el=-1,ind2el=-1;
    while(i<n1&&)
}
int main(){
    vector<int> a = {1, 4, 7, 10, 12};
    vector<int> b = {2, 3, 6, 15};
    cout << "The median of two sorted array is " << fixed << setprecision(1)
         << median(a, b) << '\n';
    return 0;
}