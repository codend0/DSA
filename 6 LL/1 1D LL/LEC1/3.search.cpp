#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node *next;
    node(int data1) {
        data = data1;
        next = nullptr;
    }
};

node* arr2LL(vector<int> &arr) {
    int n = arr.size();
    node *head = new node(arr[0]);
    node *temp = head;
    for (int i = 1; i < n; i++) {
        temp->next = new node(arr[i]);
        temp = temp->next;
    }
    return head;
}

bool searchInLL(node* head, int x) {
    node* temp = head;
    while (temp != nullptr) {
        if (temp->data == x)
            return true;
        temp = temp->next;
    }
    return false;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int x;
    cin >> x;
    node* head = arr2LL(arr);
    bool ans = searchInLL(head, x);
    cout << ans << endl;
    return 0;
}
