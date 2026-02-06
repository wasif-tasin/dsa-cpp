  #include<bits/stdc++.h>
  using namespace std;
  class mystack
  {
    public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};
  int main()
  {
   mystack st;
   st.push(10);
   st.push(20);
   st.push(30);
   
   cout << st.top() << endl;

   st.pop();

   cout << st.top() << endl;

   st.pop();

   cout << st.top() << endl;

   st.pop();

   if(st.empty() == false)  //very important line every time check that 
   {
       cout << st.top() << endl;
   }

    return 0;
  }