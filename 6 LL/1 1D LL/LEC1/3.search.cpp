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
int arr2LL(vector<int> &arr, int x)
{
    int n = arr.size();
    node *head = new node(arr[0]);
    node *temp = head;
    for (int i = 0; i < n; i++)
    {
        node *element = new node(arr[i]);
        if (temp->data == x)
        {
            return 1;
        }
        temp->next = element;
    }
    return 0;
};
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int x;
    cin >> x;
    int ans = arr2LL(arr, x);
    cout << ans << endl;
    return 0;
}