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
node *convert2Arr(vector<int> arr)
{
    node *head = new node(arr[0]);
    node *temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *mover = new node(arr[i]);
        temp->next = mover;
        temp = temp->next;
    }
    return head;
}
node *insertHead(node *head, int k)
{
    node *temp = new node(k, head);
    return temp;
}
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    node *head = convert2Arr(arr);
    int k;
    cin >> k;
    head = insertHead(head, k);
    print(head);
    return 0;
}