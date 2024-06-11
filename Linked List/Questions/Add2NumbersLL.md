# Add two number represented by linked list:

> Question link:
> https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1

### Approach:

- reverse both the linked list
- add both linked list and store it ans linked list
- reverse the ans linked list
- return the head of ans linked list

### Code:

```C++
    Node *reverseList(Node *head)
{

    if (head == NULL)
    {
        return NULL;
    }

    Node *prev = NULL;
    Node *curr = head;

    while (curr != NULL)
    {
        Node *nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    return prev;
}

void insertAtTail(Node * &ansHead, Node * &ansTail, int val)
{

    Node *newNode = new Node(val);
    // empty list
    if (ansHead == NULL)
    {
        ansHead = newNode;
        ansTail = ansHead;
        return;
    }
    else
    {

        ansTail->next = newNode;
        ansTail = newNode;
    }
}

Node *add(Node *first, Node *second)
{
    Node *ansHead = NULL;
    Node *ansTail = NULL;

    int carry = 0;

    // jab dono list ke node null na ho
    while (first != NULL && second != NULL)
    {

        // find sum
        int sum = carry + first->data + second->data;
        // get digit
        int digit = sum % 10;
        // insert digit in ans list
        insertAtTail(ansHead, ansTail, digit);

        // find carry
        carry = sum / 10;

        // farword the list
        first = first->next;
        second = second->next;
    }

    // first list me node jyada hai
    while (first != NULL)
    {
        int sum = carry + first->data;

        int digit = sum % 10;
        insertAtTail(ansHead, ansTail, digit);

        // find carry
        carry = sum / 10;
        first = first->next;
    }

    // second list me node jyada hai
    while (second != NULL)
    {
        int sum = carry + second->data;

        int digit = sum % 10;
        insertAtTail(ansHead, ansTail, digit);

        // find carry
        carry = sum / 10;
        second = second->next;
    }

    // carry jab 0  na ho
    while (carry != 0)
    {
        int sum = carry;
        int digit = sum % 10;
        insertAtTail(ansHead, ansTail, digit);
    }

    return ansHead;
}

```
> add function with single loop
```C++
// add function with single loop
Node *add(Node *first, Node *second)
{
    Node *ansHead = NULL;
    Node *ansTail = NULL;

    int carry = 0;

    while (first != NULL || second != NULL || carry != 0)
    {
        int val1 = 0;
        if(first != NULL)
            val1 = first-> data;

        int val2 = 0;
        if(second != NULL)
            val2 = second -> data;

        // find sum
        int sum = carry + val1 + val2;
        // get digit
        int digit = sum % 10;
        // insert digit in ans list
        insertAtTail(ansHead, ansTail, digit);

        // find carry
        carry = sum / 10;

        // farword the list
        if(first != NULL)
        first = first->next;

        if(second != NULL)
        second = second->next;
    }

    return ansHead;
}

```

```text
    Time complexity: O(N+M),  
    Space complexity: O(N+M) 
    
```
