#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
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
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
node *deleteAny(node *head, int k)
{
    if (head == NULL)
        return NULL;
    if (k == 1)
    {
        node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    node *temp = head;
    int cnt = 0;
    node *prv = NULL;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            prv->next = prv->next->next;
            free(temp);
            break;
        }
        prv = temp;
        temp = temp->next;
    }
    return head;
}
int main()
{
    vector<int> arr = {1, 3, 4, 7, 8};
    node *head = convertArr2LL(arr);
    int k;
    cin >> k;
    head = deleteAny(head, k);
    print(head);
    return 0;
}