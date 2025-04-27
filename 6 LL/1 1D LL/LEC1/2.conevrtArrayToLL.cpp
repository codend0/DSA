#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }

};

Node* ConvertArr2LL(vector<int>&arr){
    Node* Head=new Node(arr[0]);
    Node* Mover=Head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        Mover->next=temp;
        Mover=Mover->next;
    }
    return Head;
};
main()
{
    vector<int> arr = {2, 3, 4, 5, 6};
    Node* Head=ConvertArr2LL(arr);
    cout<<Head->data;
    return 0;
}