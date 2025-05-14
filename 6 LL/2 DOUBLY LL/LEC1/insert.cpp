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
node *convertArr(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *mover = new node(arr[i], nullptr, temp);
        temp->next = mover;
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

// insert question
node *insert_head(node *head, int k)
{
    node *temp = head;
    node *new_head = new node(k, head, nullptr);
    temp->back = new_head;
    return new_head;
}
node *insert_tail(node *head, int k)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    node *prev = temp->back;
    node *new_el = new node(k, temp, prev);
    prev->next = new_el;
    temp->back = new_el;
    return head;
}
node *insert(node *head, int k, int pos)
{
    node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == pos)
        {
            break;
        }
        temp = temp->next;
    }
    if (temp->back == NULL)
    {
        return insert_head(head, k);
    }
    if (temp->next == NULL)
    {
        return insert_tail(head, k);
    }
    else
    {
        node *prev = temp->back;
        node *new_el = new node(k, temp, prev);
        prev->next = new_el;
        temp->back = new_el;
    }
    return head;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    node *head = convertArr(arr);
    int k, pos;
    cin >> k >> pos;
    // head = insert_head(head,k);
    // head = insert_tail(head, k);
    head = insert(head, k, pos);
    print(head);
    return 0;
}