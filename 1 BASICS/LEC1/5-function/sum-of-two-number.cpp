#include <iostream>
using namespace std;
//returnable  function used for calulation or to store value
int sum(int int1,int int2){
    int add = int1 + int2;
    return add;
}

int main(){
    int int1,int2;
    cin>>int1>>int2;
    int value=sum(int1,int2);
    cout<<value;
    return 0;
}