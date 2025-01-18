#include <iostream>
using namespace std;
//pass by value 
void doSomething(int n){
    cout<<n<<endl;
    n+=10;
    cout<<n<<endl;
    n+=10;
    cout<<n<<endl;
    n+=10;
    cout<<n<<endl;
}
int main() {
    int n=10;//it is only taking a copy of n=10;
    doSomething(n);
    cout<<n<<endl;
    return 0;
}