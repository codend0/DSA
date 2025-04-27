#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *location;
    Node(int data1, Node *location1)
    {
        data = data1;
        location = location1;
    }
};
int main()
{
    vector<int> arr = {1, 2, 3, 4};
    Node *y = new Node(arr[0], nullptr);
    cout << y << endl;
    return 0;
}