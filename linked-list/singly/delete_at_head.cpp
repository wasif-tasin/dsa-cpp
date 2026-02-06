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

void delete_at_head(Node* &head)
{
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
}

int main()
{
   Node* head = NULL;
   Node* tail = NULL;
   int val;
   while(true)
   {
    cin >> val;
    if(val == -1)
    {
        break;
    }
    insert_at_tail(head, tail, val);
   }
   delete_at_head(head);
   delete_at_head(head);
   print_linked_list(head);
    return 0;
}