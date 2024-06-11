# Sort 0 1 2 in Linked list:

> Question link:
> https://www.naukri.com/code360/problems/sort-linked-list-of-0s-1s-2s_1071937?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_Lovebabbar31stJan2021&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar31stJan2021

## Appoach:

### Methods:

- count all 0, 1 and 2 and then put them in the linked list

### Code:

```C++
void sortList(Node *head) {

    int zeroCnt = 0;
    int oneCnt = 0;
    int twoCnt = 0;

    Node* temp = head;
    while(temp != NULL){

        if(temp-> data == 0){
            zeroCnt++;
        }else if(temp -> data == 1){
            oneCnt++;
        }else if(temp -> data == 2){
            twoCnt++;
        }

        temp = temp-> next;
    }

    temp = head;
    while(temp != NULL){

        if(zeroCnt != 0){
            temp -> data = 0;
            zeroCnt--;
        }else if(oneCnt != 0){
            temp -> data = 1;
            oneCnt--;
        }else{
            temp -> data = 2;
            twoCnt--;
        }

        temp = temp-> next;
    }
}

```

```text
    Time complexity: O(n), where n is the number of nodes in linked list.
    Space complexity: O(1)

```

### Method -2

- `Condition - data replacement is not allowed`
- create three 0, 1, and 2's indivisuals linked list and merge them

### Code:

```C++
void insertAtTail(Node *&tail, Node *curr)
{
    tail->next = curr;
    tail = curr;
}
Node* sortList(Node *head)
{

    Node *zeroHead = new Node(-1);
    Node *oneHead = new Node(-1);
    Node *twoHead = new Node(-1);
    Node *zeroTail = zeroHead;
    Node *oneTail = oneHead;
    Node *twoTail = twoHead;

    Node *curr = head;
    while (curr != NULL)
    {

        int value = curr->data;
        if (value == 0)
        {
            insertAtTail(zeroTail, curr);
        }
        else if (value == 1)
        {
            insertAtTail(oneTail, curr);
        }
        else if (value == 2)
        {
            insertAtTail(twoTail, curr);
        }

        curr = curr -> next;
    }

    // merge these linked list

    // one ki list empty na ho to
    if(oneHead -> next != NULL){
        zeroTail -> next = oneHead -> next;
    }else{
        zeroTail -> next = twoHead -> next;
    }

    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;

    head = zeroHead-> next;

    //delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;


    return head;

}

```

```text
    Time complexity: O(n), where n is the number of nodes in linked list.
    Space complexity: O(1)

```
