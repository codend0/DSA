#include<bits/stdc++.h>
using namespace std;
vector<int> re(vector<int>A){
    int n=A.size();
    vector<int>pos;
    vector<int>neg;
    for(int i=0;i<n;i++){
        if(A[i]>0){
            pos.push_back(A[i]);
        }
        else{
            neg.push_back(A[i]);
        }
    }
    int sp=pos.size();
    int sn=neg.size();
    if(sp>sn){
        for(int i=0;i<n/2;i++){
                A[2*i]=pos[i];
                A[2*i+1]=neg[i];
        }
        for(int i=sn;i<sp;i++){
            A[2*i]=pos[i];
        }
    }
    else if(sp<sn){
        for(int i=0;i<n/2;i++){
                A[2*i]=pos[i];
                A[2*i+1]=neg[i];
        }
        for(int i=sp;i<sn;i++){
            A[2*i]=neg[i];
        }
    }
    return A;
    
}
int main(){
    vector<int>A={1,2,3,-4,-5,-3,-4,-3,-2,-3};
    vector<int>ans=re(A);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" "; 
    }
}