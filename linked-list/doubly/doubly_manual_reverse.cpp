#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void Print_forward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void print_backward(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
// void reverse_doubly(Node *head, Node *tail)  // this is for loop
// {
//     for (Node *i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev) // condition is if the input is even then the condition is i == j; or odd j = i->previous.
//     {
//         swap(i->val, j->val);
//     }
// }
void reverse_doubly(Node* head, Node* tail) // this is while loop
{
    Node* i = head; 
    Node* j = tail;
    while(i != j && i->prev != j)
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    reverse_doubly(head, tail);
    Print_forward(head);

    return 0;
}