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

node *deleteHead(node *head)
{
    if (head == NULL)
        return NULL;
    node *temp = head;
    head = head->next;
    if (head)
        head->back = NULL;
    temp->next = NULL;
    delete temp;
    return head;
}

node *deleteTail(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        delete head;
        return NULL;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    node *last = temp->back;
    last->next = NULL;
    delete temp;
    return head;
}

node *deleteEl(node *head, int k)
{
    if (head == NULL)
        return NULL;
    int cnt = 0;
    node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            break;
        }
        temp = temp->next;
    }
    node *front = temp->next;
    node *prev = temp->back;
    if (front == NULL && prev == NULL)
    {
        return NULL;
    }
    else if (front == NULL)
    {
        return deleteHead(head);
    }
    else if (prev == NULL)
    {
        return deleteTail(head);
    }
    front->back = prev;
    prev->next = front;
    temp->next = nullptr;
    temp->back = nullptr;
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    node *head = convert(arr);
    int k;
    cin >> k;
    head = deleteEl(head, k);
    print(head);
    return 0;
}
