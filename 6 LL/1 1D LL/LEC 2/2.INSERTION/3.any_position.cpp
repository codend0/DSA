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
node *insert_any(node *head, int k, int el)
{
    if (head == NULL)
    {
        if (k == 1)
        {
            return new node(el);
        }
        else
        {
            return NULL;
        }
    }
    int cnt = 0;
    node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k - 1)
        {
            node *add = new node(el, temp->next);
            temp->next = add;
            break;
        }
        temp = temp->next;
    }
    return head;
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
    int k, el;
    cin >> k >> el;
    head = insert_any(head, k, el);
    print(head);
    return 0;
}