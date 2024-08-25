# Queue

Queues are a type of container adaptors that operate in a <b><i>first in first out (FIFO) type of arrangement</i> </b>. Elements are inserted at the back (end) and are deleted from the front.

## some important public function

1. empty() - Test whether container is empty
2. size() -Return size
3. front() - Access next element
4. back() - Access last element
5. push() - Insert element
6. emplace() - Construct and insert element
7. pop() - Remove next element
8. swap() - Swap contents

## Code -

```C++
#include<bits/stdc++.h>
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

    cout << "front element in queue  is: " << q.front() << endl;

    cout << "last element in queue is: " << q.back() << endl;

    if(q.empty()){
        cout << "Queue is empty" << endl;
    }else{
        cout << "Queue is not empty" << endl;
    }
    return 0;
};
```

## Implementation of queue using array:
### Code -
```


```
## Circular Queue
