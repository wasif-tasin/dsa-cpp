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
  void delete_at_any_position(Node* head, int index)
  {
    Node* temp = head;
    for(int i = 1; i < index; i++)
    {
        temp = temp->next;
    }
    Node* deletenode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deletenode;
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

    delete_at_any_position(head, 2);

    Print_forward(head);
    print_backward(tail);

    return 0;
  }