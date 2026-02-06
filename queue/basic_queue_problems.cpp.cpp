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

class mystack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
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
    void pop()
    {
        sz--;
        Node *deletenode = tail;
        tail = tail->prev;
        delete deletenode;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        //     if(head == NULL)
        //     return true;
        //     else
        //     return false;
        return head == NULL;
    }
};

class myQueue
  {
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push (int val)
    {
        sz++;
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
     void pop()
     {
        sz--;
        Node* deletenode = head;
        head = head->next;
        delete deletenode;
        if(head == NULL)
        {
            tail = NULL;
            return;
        }
        head->prev=NULL;
     }
     int front()
     {
        return head->val;
     }
     
     int back()
     {
        return tail->val;
     }

     int size()
     {
        return sz;
     }

     bool empty()
     {
        return head == NULL;
     }

  };


int main()
{
    mystack st;
    myQueue q;
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
     for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    if(st.size() != q.size())
    {
        cout << "NO";
        return 0;
    }
    while (!st.empty())
    {
        if (st.top() == q.front())
        {
            st.pop();
            q.pop();
        }
        else
        {
            cout << "NO";
            break;
        }
    
    }

    if (st.empty() && q.empty())
    {
        cout << "YES";
    }
    else if(st.empty() && q.empty() == false)
    {
        cout << "NO";
    }
    return 0;
}