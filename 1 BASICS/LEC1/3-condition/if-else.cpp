#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the marks :";
    cin>>n;
    if(n<25){
        cout<<"F";
    }
    else if (n >= 25 && n <= 44) {
        cout << "Grade: E" << endl;
    } else if (n >= 45 && n <= 49) {
        cout << "Grade: D" << endl;
    } else if (n >= 50 && n <= 59) {
        cout << "Grade: C" << endl;
    } else if (n >= 60 && n <= 69) {
        cout << "Grade: B" << endl;
    } else if (n >= 70 && n <=100) {
        cout << "Grade: A" << endl;
    } else {
        cout << "Invalid marks entered." << endl;
    }
    return 0;
}