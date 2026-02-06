  #include<bits/stdc++.h>
  using namespace std;
  class Node
  {
      public:
          int val;
          Node* next;
          Node* prev;
      Node(int val)
      {
          this->val = val;
          this->next = NULL;
          this->prev = NULL;
      }
  };
  void Print_forward(Node* head)
  {
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
  }
  void print_backward(Node* tail)
  {
    Node* temp = tail;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
  }
  void insert_at_any_position(Node* head, int index, int val)
  {
    Node* newnode = new Node(val);
    Node* temp = head;
    for(int i = 1; i < index; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next->prev = newnode;

    temp->next = newnode;
    newnode->prev = temp;
  }
  int main()
  {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(40);

    head->next = a;
    a->prev = head;
    
    a->next = b;
    b->prev = a;
    
    b->next = tail;
    tail->prev = b;

    insert_at_any_position(head, 3, 100);
    insert_at_any_position(head, 1, 200);
    
    Print_forward(head);
    print_backward(tail);

    return 0;
  }