# Function to find the middle node of the linked list

> Question link:
> https://www.naukri.com/code360/problems/middle-of-linked-list_973250?source=youtube&campaign=Lovebabbarcodestudio_24thJan&leftPanelTabValue=SUBMISSION

## method - 1

### Steps:

- Maintain a function, say getLength(head) that returns the number of nodes in the linked list.

- Find the number of nodes in the linked list (say len) using the getLength(head) function.

- Find the middle index midIdx = len/2.

- Start traversing through the nodes of the linked list and decrement midIdx by 1 for each node.

- As soon as the midIdx reaches 0, return the current node.

## Code:

```C++
    // define a getLength function to find the length of linked list

    Node* getMiddle(Node* head){
        int length = getLength(head);
        int midIdx = length/2;
        Node* temp = head;

        while(midIdx--){
            temp = temp-> next;
        }

        return temp;
    }
```
```
    Time compelexity:  O(2 * N) = O(N)
    where N is the number of nodes in the linked list.

    Auxiliary Space: O(1)
```

## method - 2: Find Middle of the Linked List using Floyd’s Cycle Finding Algorithm

> We can use the Floyd’s Cycle Finding Algorithm, also known as Hare and Tortoise Algorithm to find the middle of the linked list. Traverse linked list using a `slow pointer` and a `fast pointer`. Move the slow pointer to the next node(one node forward) and the fast pointer to the next of the next node(two nodes forward). `When the fast pointer reaches the last node or NULL, then the slow pointer will reach the middle of the linked list.`

> In case of odd number of nodes in the linked list, slow_ptr will reach the middle node when fast_ptr will reach the last node and in case of even number of nodes in the linked list, slow_ptr will reach the middle node when fast_ptr will become NULL.

## Steps: 
* Initialize a slow pointer slow_ptr = head and a fast pointer fast_ptr = head.

* Iterate till fast_ptr reaches the last node(fast_ptr->next != NULL) or becomes NULL(fast_ptr != NULL).

* Move fast_ptr by two nodes, fast_ptr = fast_ptr->next->next.

* Move slow_ptr by one node, slow_ptr = slow_ptr->next.

* As soon as the fast_ptr reaches the last node or becomes NULL, return the value at slow_ptr.
## Code:

```C++
    Node* getMiddle(Node* head){
         Node* slow_ptr = head;
        Node* fast_ptr = head;

        while(fast != NULL && fast -> next != NULL){
        slow_ptr = slow_ptr -> next;
        fast_ptr = fast_ptr -> next -> next;
    }

        return slow_ptr;
    }
```
```text
    Time Complexity: O(N), 
    where N is the number of nodes in the linked list.

    Auxiliary Space: O(1)
```

#  Function to find the middle node data of the linked list

> Question link:
> https://www.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article


### method - 1

```C++
int getLength(Node *head)
{
    int len = 0;
    while (head != NULL)
    {

        len++;
        head = head->next;
    }

    return len;
}

/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
    Node *temp = head;
    int length = getLength(head);

    if (length != 0)
    {

        int mid = length / 2;
        while (mid--)
        {
            temp = temp->next;
        }
        return temp->data;
    }

    return -1;
}

```

### method - 2

```Cpp
int getMiddle(Node *head) {

    if(head == NULL){
        return -1;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    return slow -> data;

}
```
