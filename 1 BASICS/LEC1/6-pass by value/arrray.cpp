#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<=4;i++){//agar n ki array hai to print whole array n-1 tak loop chale ga
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
    return 0;
}