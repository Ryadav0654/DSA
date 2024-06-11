#include <iostream>
#include <array>
#include <stack>
#include <vector>
#include <deque>
#include <list>
#include <queue>
#include <set>
#include <map>

//replace all libraries using this library
//  #include <bits/stdc++.h>


using namespace std;

int main(int argc, char const *argv[])
{
    // define an array using stl

    array<int, 5> arr = {1, 2, 3, 4, 5};

    // arr.size() will give the size of arr

    int sizeOfArray = arr.size();
    cout << "size of arr is " << sizeOfArray << endl;

    // print all element of arr

    for (int i = 0; i < sizeOfArray; i++)
    {

        cout << arr[i] << " " << endl;
    }

    // arr.at(anyIndex) will give the value of that index.

    cout << "element at index 2 is " << arr.at(2) << endl;

    // arr.empty() return a boolean value true or false

    cout << "check array is empty or not " << arr.empty() << endl;

    // arr.front() return the first element of arr.
    cout << "first element of arr " << arr.front() << endl;

    // arr.back() return the last element of arr

    cout << "Last element of arr " << arr.back() << endl;

    // vector using stl

    // Note - if we store any element after size of the vector, a new vector create the double size of the previous vector and it copy all the elements of previous vector.

    vector<int> v;
    vector<int> vec(5, 1); // vector<int> vec(sizeOfVector, Initialization);

    // copy the vector vec in the other vector
    vector<int> otherVec(vec);

    // print all the element of the vector vec
    for (int i : vec)
    {
        cout << vec[i] << " ";
    }

    cout << endl;
    // v.capacity() will give the space taken by the vector
    cout << "capacity of vector v " << v.capacity() << endl;

    // v.push_back() use to push the element in the vector

    v.push_back(1);
    cout << "capacity of vector v " << v.capacity() << endl;
    v.push_back(2);
    cout << "capacity of vector v " << v.capacity() << endl;
    v.push_back(3);
    cout << "capacity of vector v " << v.capacity() << endl;

    // v.size() will give the size of vector means how many element in the vector
    int sizeOfVector = v.size();
    cout << "size of the vector " << sizeOfVector << endl;

    // arr.front() return the first element of arr.
    cout << "first element of vector " << v.front() << endl;

    // arr.back() return the last element of arr

    cout << "Last element of vector " << v.back() << endl;

    // v.pop_back() used for remove the last element of vector.

    v.pop_back();

    // v.clear() used for remove all the element of the vector. when we clear the vector, size becomes zero but capacity does not zero
    v.clear();

    // Deque using stl

    deque<int> d;

    // d.push_back() used for add the element from last in the deque
    d.push_back(2);

    // d.push_front() used for add the element from start in the deque
    d.push_front(1);

    // print any index element using d.at(index)
    cout << "element in 1 index " << d.at(1) << endl;

    // d.front() return the first element of deque d.
    cout << "first element of deque d " << d.front() << endl;

    // d.back() return the last element of deque d

    cout << "Last element of deque d " << d.back() << endl;

    // d.size() will give the size of deque d

    int sizeOfDeque = d.size();
    cout << "size of d is " << sizeOfDeque << endl;

    // d.empty() return a boolean value true or false

    cout << "check deque is empty or not " << d.empty() << endl;

    // d.erase(start, end) or point a and b d.erase(a,b)
    d.erase(d.begin(), d.begin() + 1);

    // List using stl
    list<int> l;
    list<int> li(5, 100); // list<int> listname(listsize, initial list)
    l.push_front(1);
    l.push_back(2);
    cout << "list" << endl;
    for (int i : l)
    {
        cout << i << endl;
    }

    // use all above operation in the list

    // 👉 Stack using stl

    stack<string> s;

    // push the element in the stack

    s.push("Ravi");
    s.push("Yadav");
    s.push("Suraj");

    // s.size() used for finding the size of stack
    int sizeOfStack = s.size();

    // s.top() used to print the top element of stack s
    cout << s.top() << endl;

    // s.pop() used for remove the element
    s.pop();

    // s.empty() used  to check the stack is empty or not
    cout << "stack is empty or not " << s.empty() << endl;

    // 👉 Queue using stl

    queue<string> q;

    // push the element in the queue

    q.push("Ravi");
    q.push("Yadav");
    q.push("Suraj");

    // q.size() used for finding the size of queue
    int sizeOfQueue = q.size();

    // q.front() used to print the top element of queue q
    cout << q.front() << endl;

    // q.pop() used for remove the element
    q.pop();

    // q.empty() used  to check the queue is empty or not
    cout << "stack is empty or not " << q.empty() << endl;

    // 👉 Priority Queue

    // this syntax make max priority queue
    priority_queue<int> maxi;

    maxi.push(2);
    maxi.push(5);
    maxi.push(8);
    maxi.push(6);

    // size of maxi queue
    int n = maxi.size();

    // print all element
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }

    cout << endl;

    // this syntax make mini priority queue
    priority_queue<int, vector<int>, greater<int>> mini;

    mini.push(2);
    mini.push(5);
    mini.push(1);
    mini.push(0);

    // size of maxi queue
    int m = mini.size();

    // print all element
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }

    cout << endl;

    // 👉 Set

    // Note- set store only unique value
    // Don't modify the element only insert or delete
    // element return in sorted order

    set<int> a;

    // insert the element in the set
    a.insert(5);
    a.insert(5);
    a.insert(6);
    a.insert(0);
    a.insert(2);
    a.insert(1);

    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = a.begin();
    it++;

    a.erase(it);

    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    // s.count() tell the element present in the set or not

    cout << "5 present or not " << a.count(5) << endl;

    //👉 Map

    map<int, string> mp;

    mp[1] = "Ravi";
    mp[13] = "Suraj";
    mp[5] = "yadav";

    // we  can also use the insert function to insert value in the map

    

    mp.insert({3, "shani"});

    cout << "13 is present or not: " << mp.count(13) << endl;
    cout << "before erase" << endl;

    for(auto i:mp){

        cout << i.first << " " << i.second<< endl;

    }

    mp.erase(13);

    cout << "after erase" << endl;

    for(auto i:mp){

        cout << i.first << " " << i.second << endl;
    }





    

    return 0;
}
