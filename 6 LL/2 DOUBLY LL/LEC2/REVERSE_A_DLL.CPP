#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *back;
    node(int data1, node *next1, node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
    node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

node *convert(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *move = new node(arr[i]);
        move->back = temp;
        temp->next = move;
        temp = temp->next;
    }
    return head;
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
// reverse a DLL
node *reverse_DLL(node *head)
{
    stack<int> st;
    while (head != NULL)
    {
        st.push(head->data);
        node *temp = head;
        head = head->next;
        delete (temp);
    }
    node *new_head = new node(st.top());
    st.pop();
    node *temp = new_head;
    while (!st.empty())
    {   
        node *mover = new node(st.top(), nullptr, temp);
        st.pop();
        temp->next = mover;
        temp = temp->next;
    }
    return new_head;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    node *head = convert(arr);
    head = reverse_DLL(head);
    print(head);
    return 0;
}
