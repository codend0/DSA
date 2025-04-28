#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data1, node *next1)
    {
        data = data1;
        next = next1;
    }
    node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
node *convertArr2LL(vector<int> &arr)
{
    node *head = new node(arr[0]);
    // never change the head of the LL
    node *temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *move = new node(arr[i]);
        temp->next = move;
        temp = temp->next;
    }
    return head;
}
node *deleteHead(node *head)
{
    if(head==NULL)return NULL;
    node* temp=head;
    head=head->next;
    //delete previous head of the node
    free(temp);
    return head;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    node *head = convertArr2LL(arr);
    head= deleteHead(head);
    cout<<head->data<<endl;
    return 0;
}