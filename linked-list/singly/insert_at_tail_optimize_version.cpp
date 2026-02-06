#include <bits/stdc++.h>
using namespace std;

class Node 
{
public:
    int val;
    Node *next;
    
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node* &tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL) // if the liked list was blank {corner case}
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail=tail->next;
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    // int count=0;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        // count ++;
        temp = temp->next;

    }
    // cout<<count;
}

int main()
{
    Node *head = new Node(10);;
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = b; 

    head->next = a;
    a->next = b;

    insert_at_tail(head, tail, 100);
    insert_at_tail(head,tail, 300);
    print_linked_list(head);

    return 0;
}