#include <bits/stdc++.h>
using namespace std;

/*
    File: basic_queue_problems.cpp
    Purpose: Demonstrates basic queue operations through a simple simulation.
    Concepts used: push, pop, front, empty
*/

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl;

    q.pop();

    cout << "Front element after pop: " << q.front() << endl;

    cout << "Queue elements: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
