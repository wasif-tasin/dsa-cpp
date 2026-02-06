#include <bits/stdc++.h>
using namespace std;

/*
    File: queue_using_stl.cpp
    Purpose: Demonstrates all basic operations of STL queue in C++
    Operations covered:
    - push
    - pop
    - front
    - back
    - size
    - empty
*/

int main() {
    queue<int> q;

    // push operation
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;
    cout << "Queue size: " << q.size() << endl;

    // pop operation
    q.pop();
    cout << "After one pop, front element: " << q.front() << endl;

    // check empty
    if (q.empty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }

    // process all elements
    cout << "Queue elements: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    // final empty check
    if (q.empty()) {
        cout << "Queue is now empty after processing all elements" << endl;
    }

    return 0;
}
