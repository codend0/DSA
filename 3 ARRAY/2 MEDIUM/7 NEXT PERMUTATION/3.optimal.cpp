#include <bits/stdc++.h>
using namespace std;
vector<int> nextP(vector<int>&A){
    int n=A.size();
    /*so what are we doing in this question is that we are finding the next permutation
    so we check from back if the digit decrease somewhere first so it is the point */
    int point =-1;
    //itterating in the loop and checking if the term next is smaller because we are it from back
    for(int i=n-2;i>=0;i--){
        if(A[i]<A[i+1]){
            point =i;
            break;
        }
    }
    //if there is no point means it is the last permutation so we will print the first term 
    if(point==-1){
        //so we just reverse the last term
        reverse(A.begin(),A.end());
        return A;
    }
    //Then we check in the right part of the point is ther is a term just bigger than point
    for(int i=n-1;i>point;i--){
        if(A[point]<A[i]){
            //And we swap the point and that number
            swap(A[point],A[i]);
            break;
        }
    }
    //Because we want just bigger after placing the just greater number on point place we
    //will reverse the remaing  right portion because we will make just  smaller number because
    //small term are in last and mover from right to left term are increasing
    reverse(A.begin()+point+1,A.end());

    return A;
}
int main(){
    vector<int>A={2, 1, 5, 4, 3, 0, 0};
    vector<int>ans=nextP(A);
    for(auto it:ans){
        cout<<it<<" ";
    }
}