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
    node *temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *move = new node(arr[i]);
        temp->next = move;
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
void printCnt(node *head)
{
    node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    cout << cnt;
}
int main()
{
    vector<int> arr = {1, 2, 3, 5, 6, 3, 2, 6, 12, 53, 2};
    node *head = convertArr2LL(arr);
    print(head);
    cout << "\nthe size of LL : ";
    printCnt(head);
    return 0;
}