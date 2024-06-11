# Merge two sorted Linked list:

> Question link:
> https://www.naukri.com/code360/problems/merge-two-sorted-linked-lists_800332?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_Lovebabbar31stJan2021&leftPanelTabValue=SOLUTION

## Method - 1:

### Approach:

- condition check kar ke nodes ko ek new linked list me add karate jayenge aur end me new linked list ke head ko return kar denge

### Code:

```C++
void insertAtTail(Node * &tail, Node *temp)
{
    tail->next = temp;
    tail = temp;
}

Node *mergeSortedLL(Node *head1, Node *head2)
{
    Node *mergeLLHead = new Node(-1);
    Node *mergeLLTail = mergeLLHead;

    Node *temp1 = head1;
    Node *temp2 = head2;

    while (temp1 != NULL && temp2 != NULL)
    {

        if (temp1->data > temp2->data)
        {
            insertAtTail(mergeLLTail, temp2);
            temp2 = temp2->next;
        }
        else
        {
            insertAtTail(mergeLLTail, temp1);
            temp1 = temp1->next;
        }
    }

    //if first list badi ho
    while(temp1 != NULL){
        insertAtTail(mergeLLTail, temp1);
        temp1 = temp1 -> next;
    }

    //if second list badi ho
    while(temp2 != NULL){
        insertAtTail(mergeLLTail, temp2);
        temp2 = temp2 -> next;
    }

    //merge list ko end kar do
    mergeLLTail -> next = NULL;

    //setup head of merge list
    Node* head = mergeLLHead -> next;

    //delete dummy node of merge list
    delete mergeLLHead;

    return head;
}
```

```text
    Time complexity: O(n), where n is the number of nodes in  linked list.
    Space complexity: O(n)

```

## Method -2

### Approach:

- if first list empty hai to second ko return kardenge. if second list empty hai to first ko return kar denge
- jis list ka data small hoga use first list lenge aur dusare ko second list lenge

### Code:

```C++
Node<int>* solve(Node<int>* first, Node<int>* second){

    // yadi first list me ek node ho
    if(first -> next == NULL){
        first -> next = second;
        return first;
    }

    //define pointers

    Node<int>* curr1 = first;
    Node<int>* next1 = curr1 -> next;
    Node<int>* curr2 = second;
    Node<int>* next2 = curr2 -> next;

    while(next1 != NULL && curr2 != NULL){

        if((curr2-> data >= curr1-> data) && (curr2 -> data <= next1 -> data)){
            //add node in  first list
            curr1-> next = curr2;
            next2 = curr2 -> next;
            curr2-> next = next1;

            //updating pointers
            curr1 = curr2;
            curr2 = next2;

        }else{
            //go one step ahead of first list
            curr1 = next1;
            next1 = next1 -> next;

            if(next1 == NULL){
                curr1-> next = curr2;
                return first;
            }
        }
    }

    return first;
}

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second){

    if(first == NULL){
        return second;
    }

    if(second == NULL){
        return first;
    }

    if(first-> data < second -> data){
        return solve(first, second);
    }else{
        return solve(second, first);
    }
}
```

```text
    Time complexity: O(n), where n is the number of nodes in linked list.
    Space complexity: O(1)

```
