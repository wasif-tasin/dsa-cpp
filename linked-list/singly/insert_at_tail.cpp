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
void insert_at_tail(Node *&head, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL) // if the liked list was blank {corner case}
    {
        head = newnode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL) // now temp in the last Node
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main()
{
    Node *head = new Node(10);;
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_tail(head, 100);
    insert_at_tail(head, 200);
    print_linked_list(head);

    return 0;
}