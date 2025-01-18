#include <iostream>
using namespace std;
void maxx(int int1,int int2){
    if(int1>int2){
        cout<<"max is "<<int1<<endl;
    }
    else{
        cout<<"max is "<<int2<<endl;
    }
}
int main() {
    //using inbuilt function
    int int1,int2;
    cin>>int1>>int2;
    // int value =max(int1,int2);
    // cout<<value;
    maxx(int1,int2);
    return 0;

}