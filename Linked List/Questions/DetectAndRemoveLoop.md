# Detect and remove loop in Linked list

> Question link:
>https://www.naukri.com/code360/problems/interview-shuriken-42-detect-and-remove-loop_241049?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_codestudio_lovebabbar28thjan&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_codestudio_lovebabbar28thjan

> Interviewer can ask:

- Detect cycle in linked list
- Remove cycle in linked list
- Begining/Start node of loop in linked list

## Detect cycle/loop in linked list: 
### Approach:

- using map

### Code:

```C++
bool detectLoop(Node* head){

    //empty linked list
    if(head == NULL){
        return false;
    }

    map<Node* , bool> visited;
    Node* temp = head;
    while(temp != NULL){

        if(visited[temp] == true){
            cout << "loop start at : " << temp -> data << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;
    }

    return false;
}

```

```text
    Time complexity: O(n), where n is the number of nodes present in linked list.
    Space complexity: O(n)
```

### Floyd's cycle detection Algorithms:

### Approach:

- take two slow and fast pointer, initially which is points to head pointer.
- slow take one step forward and fast take two step forward
- when they meet each other at any node, cycle is present
- `Note:` Every iteration the distance between slow and fast pointer will be decrese.

### Code:

```C++
bool isCyclePresent(Node *head)
{

    // empty linked list
    if (head == NULL)
    {
        return false;
    }
    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {

        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
        {
            return true;
        }
    }

    return false;
}
```

```text
    Time complexity: O(n), where n is the number of nodes in the linked list.
    Space complexity: O(1)
```

## Find starting/begining point of loop/cycle:

### Approach:

- find point of interaction (using FCD)
- slow = head and start roatating with same pace.

### Code:

```C++
// function to find the intersection Node

Node* getIntersectionNode(Node *head)
{

    // empty linked list
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {

        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
        {
            return fast;
        }
    }

    return NULL;
}

// function to find the starting node of the loop/cycle

Node* getStartingNode(Node* head){

    //empty linked list
    if(head == NULL){
        return NULL;
    }

    //find intersection point using fcd
    Node* intersection = getIntersectionNode(head);
    Node* slow = head;
    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }

    /* or

    Node* slow = head;
    Node* fast = intersection;
    while(slow != fast){
        slow = slow -> next;
        fast = fast -> next;
    }

    */
    return slow;
}

```

## Remove the cycle in the linked list:

### Approch:

- starting node find karo.
- usake ek pahle wali node ke next ko NULL kar do.

### Code:

```C++
Node* getIntersectionNode(Node *head)
{

    // empty linked list
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {

        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
        {
            return fast;
        }
    }

    return NULL;
}

// function to find the starting node of the loop/cycle

Node* getStartingNode(Node* head){

    //empty linked list
    if(head == NULL){
        return NULL;
    }

    //find intersection point using fcd
    Node* intersection = getIntersectionNode(head);

    if(intersection == NULL){
        return NULL;
    }

    Node* slow = head;
    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }

    /* or

    Node* slow = head;
    Node* fast = intersection;
    while(slow != fast){
        slow = slow -> next;
        fast = fast -> next;
    }

    */
    return slow;
}

// function to remove the loop
    void removeLoop(Node* head){

    if(head == NULL){
        return ;
    }

    Node* startNode = getStartingNode(head);

    if(startNode == NULL){
        return head;
    }

    Node* temp = startNode;
    while(temp-> next != startNode){
        temp = temp-> next;
    }

    temp -> next = NULL;
}
```
