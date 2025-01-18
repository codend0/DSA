#include <bits/stdc++.h>
using namespace std;
//it is a two pointer approach
vector<int> FindUnion(int arr1[],int arr2[],int n,int m){
    //we are initalizing two pointer in start
    int i=0;
    int j=0;
    vector<int>unionarr;
    while(i<n && j<m){
        if(arr1[i]<=arr2[i]){
            if(unionarr.size()==0||unionarr.back()!=arr1[i]){
            unionarr.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(unionarr.size()==0||unionarr.back()!=arr2[j]){
                unionarr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<n){
        if(unionarr.size()==0||unionarr.back()!=arr1[i]){
            unionarr.push_back(arr1[i]);
        }
        i++;
    }
    while(j<m){
        if(unionarr.size()==0||unionarr.back()!=arr2[j]){
            unionarr.push_back(arr2[j]);
        }
        j++;
    }
    return unionarr;
}

int main(){
    int n = 10, m = 7;
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[] = {2, 3, 4, 4, 5, 11, 12}; 
  vector < int > unionarr = FindUnion(arr1, arr2, n, m);
  cout << "Union of arr1 and arr2 is  " << endl;
  for (auto it: unionarr)
    cout << it << " ";
  return 0;
}