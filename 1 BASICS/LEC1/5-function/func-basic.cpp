#include <iostream>
using namespace std;
//void does not return used to console
void greetings(string name){
    cout<<"hello "<<name;
}
int main(){
    string  name;
    cout<<"enter your name :";
    cin>>name;
    greetings(name);
}