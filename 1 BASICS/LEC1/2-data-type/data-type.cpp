#include <iostream>
using namespace std;
int main(){
    string str;
    // cin>>str; it print only one word of sentence
    getline(cin,str);//it basically took whole string from the input
    cout<<str;
    //**********************************************//
    int n;
    cin>>n;
    cout<<sizeof(n);
    return 0;

/*

1.Fundamental Data Types:
Integer Types:

int: Standard integer (e.g., int a = 10;)

short: Short integer (e.g., short b = 5;)

long: Long integer (e.g., long c = 100000L;)

long long: Extended size integer (e.g., long long d = 10000000000LL;)

2.Floating-Point Types:

float: Single-precision floating-point (e.g., float e = 3.14f;)

double: Double-precision floating-point (e.g., double f = 3.14159;)

long double: Extended-precision floating-point (e.g., long double g = 3.141592653589793238;)

3.Character Types:

char: Single character (e.g., char h = 'A';)

wchar_t: Wide character (e.g., wchar_t i = L'A';)

4.Boolean Type:

bool: Boolean value (true or false) (e.g., bool j = true;)

Void Type:

void: Represents the absence of type. Mainly used in functions to indicate that they return no value.
*/
}