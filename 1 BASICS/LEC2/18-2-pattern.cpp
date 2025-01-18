#include<bits/stdc++.h>
using namespace std;
//striver ki sheet se alag question open ho rah tha to question ka code hai ye
void print(int n){
    for(int i=0;i<n;i++){ 
        char ch='A'+n-1;
        for(int j=0;j<=i;j++){ 
            cout<<ch--<<" ";
          }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print (n);
}