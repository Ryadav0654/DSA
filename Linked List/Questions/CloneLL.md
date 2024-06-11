# Clone a linked list with next and random pointer:

> Question link:
> https://www.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1

### Approach:
* create clone list (using next pointer)
* create a map and store the random pointer
* return ans or clonehead
### Code:

```C++
void insertAtTail(Node* &head, Node* &tail, int val){

        Node* newNode = new Node(val);
        //empty list
        if(head == NULL){
            head = newNode;
            tail = head;
            return ;
        }else{
            tail-> next = newNode;
            tail = newNode;
        }
    }


    Node *copyList(Node *head)
    {

    //step1- create clone linked list(using  next pointer)
    Node* cloneHead = NULL;
    Node* cloneTail = NULL;

    Node* temp = head;
    while(temp != NULL){
        insertAtTail(cloneHead, cloneTail, temp-> data);
        temp = temp -> next;
    }

    // step2- create a map and store the random pointer
    unordered_map<Node*, Node*> oldToNewNode;

    Node* originalNode = head;
    Node* cloneNode = cloneHead;

    while(originalNode != NULL && cloneNode != NULL){
        oldToNewNode[originalNode] = cloneNode;
        originalNode = originalNode-> next;
        cloneNode = cloneNode -> next;
    }

    originalNode = head;
    cloneNode = cloneHead;
// here arb is a random pointer
    while(originalNode != NULL){
        cloneNode -> arb = oldToNewNode[originalNode -> arb];
        originalNode = originalNode-> next;
        cloneNode = cloneNode -> next;
    }

    return cloneHead;
}

```

## Method -2

### Approach:
* create clone list(using next pointer)
* clone nodes add in between original list
* random pointer copy
* revert changes done in step2
* return ans or clonehead
### Code:

```C++
void insertAtTail(Node *head, Node *tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

Node *copyLL(Node *head)
{
    // step1- create clone linked list
    Node *cloneHead = NULL;
    Node *cloneTail = NULL;

    Node *temp = head;
    while (temp != NULL)
    {
        insertAtTail(cloneHead, cloneTail, temp->data);
        temp = temp->next;
    }
    // step2- clone nodes add in between original list

    Node *originalNode = head;
    Node *cloneNode = cloneHead;

    while (originalNode != NULL && cloneNode != NULL)
    {
        Node *nextNode = originalNode->next;
        originalNode->next = cloneNode;
        originalNode = nextNode;

        nextNode = cloneNode->next;
        cloneNode->next = originalNode;
        cloneNode = nextNode;
    }

    // step3- random pointer copy
    temp = head;
    while (temp != NULL)
    {
        if (temp->next != NULL)
        {
            temp->next->arb = temp->arb ? temp->arb->next : temp->arb;
        }

        temp = temp -> next -> next;
    }
    // step4- revert changes done in step2
    originalNode = head;
    cloneNode = cloneHead;

    while(originalNode != NULL && cloneNode != NULL){
        originalNode -> next = cloneNode -> next;
        originalNode = originalNode -> next;

        if(originalNode != NULL){
            cloneNode->next = originalNode->next;
        }

        cloneNode = cloneNode -> next;
    }
    // step5- return clonehead
    return cloneHead;
}
```
