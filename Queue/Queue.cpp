#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "size of queue: " << q.size() << endl;                                                                                                   
    q.pop();

    cout << "size of queue after the pop of one element: " << q.size() << endl;

    cout << "front element in queue is: " << q.front() << endl;

    cout << "last element in queue is: " << q.back() << endl;

    if (q.empty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }

    cout << "print queue: " << endl;
    int n = q.size();

    for(int i = 0; i < n; i++){
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;

    return 0;
};