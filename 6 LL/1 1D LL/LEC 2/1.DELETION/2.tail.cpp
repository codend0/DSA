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
node* convertArr2LL(vector<int>&arr){
    node* head=new node(arr[0]);
    node* temp=head;
    for(int i=1;i<arr.size();i++){
        node* move=new node(arr[i]);
        temp->next=move;
        temp=temp->next;
    }
    return head;
}
node* deleteTail(node* head){
    node* deleteTail(node* head) {
        if (head == NULL) return NULL; 
        if (head->next == NULL) {
            delete head;
            return NULL;
        }
        node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
        return head;
    }
    
}
int main()
{
    vector<int> arr = {1, 3, 4, 7, 8};
    node *head = convertArr2LL(arr);
    head=deleteTail(head);
    return 0;
}