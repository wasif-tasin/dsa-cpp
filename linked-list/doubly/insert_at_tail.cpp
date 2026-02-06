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
  void insert_at_tail(Node* &tail, Node*& head, int val)
  {
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
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

    insert_at_tail(tail, head, 100);
    insert_at_tail(tail, head, 200);        
    
    Print_forward(head);
    print_backward(tail);

    return 0;
  }