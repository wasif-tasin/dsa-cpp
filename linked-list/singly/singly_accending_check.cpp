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
void accending_check(Node* &head)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->val > temp->next->val)
        {
            cout<< "No";
            return;
        }
        temp = temp->next;
    }
  cout << "YES";
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    accending_check(head);
    return 0;
}