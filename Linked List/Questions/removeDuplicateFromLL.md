# Remove the duplicate nodes/element in the linked list

> Question link:

> Sorted Linked list: https://www.naukri.com/code360/problems/unique-sorted-list_2420283?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_Lovebabbar29thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar29thJan

> Unsorted linked list: https://www.naukri.com/code360/problems/remove-duplicates-from-unsorted-linked-list_1069331?source=youtube&campaign=YouTube_Lovebabbar29thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar29thJan


## Remove duplicates nodes from sorted linked list:

### Approach:

-

### Code:

```C++
    //function to remove the duplicate node from linked list
    /* method - 1

    void removeDuplicateNode(Node *head)
{
    //empty linked list
    if (head == NULL)
    {
        return;
    }

    Node *prev = head;
    Node *curr = head->next;

    while (curr != NULL)
    {

        if (prev->data == curr->data)
        {

            Node *nextNode = curr->next;
            Node *deletedNode = curr;
            delete (deletedNode);
            curr = nextNode;
            prev->next = curr;
        }
        else
        {
            prev = curr;
            curr = curr->next;
        }
    }
}

*/
// method - 2
void removeNodeFromSortedLL(Node *head)
{

    // empty linked list
    if (head == NULL)
    {
        return;
    }

    Node *curr = head;
    while (curr != NULL)
    {

        if ((curr->next != NULL) && (curr->data == curr->next->data))
        {
            Node *nextNode = curr->next->next;
            Node *deleteToNode = curr->next;
            delete (deleteToNode);
            curr -> next = nextNode;
        }
        else
        {
            curr = curr->next;
        }
    }
}

```

## Remove duplicate nodes from unsorted linked list:

### method:

- using inner loop

👉 first loop se linked list ke ek node ko lenge aur doosare loop ko pure LL me travese kar ke duplicate nodes check karenge if koi node milata hai to use delete kar denge.

### Code:

```C++
void removeNodeFromUnsortedLL(Node *head)
{
    //empty linked list
    if (head == NULL)
    {
        return;
    }

    //take visited node 
    Node *visitedNode = head;

    //this loop traverse ll and take one by one node
    while (visitedNode != NULL)
    {
        //take prev and curr pointer
        Node* prev = visitedNode;
        Node *curr = visitedNode->next;


        while (curr != NULL)
        {

            if (curr->data == visitedNode->data)
            {
                Node* nextNode = curr-> next;
                Node* deleteToNode = prev -> next;
                delete(deleteToNode);
                curr = nextNode;
                prev-> next = curr;
            }
            else
            {
                prev = curr;
                curr = curr->next;
            }
        }
        visitedNode = visitedNode->next;
    }
}

```

```text
    Time complexity: O(n^2), where n is the number of nodes in the linked list.
    
    Space complextiy: O(1)
```

- sort the linked list and then remove the duplicate Nodes

### Code: 
```C++

```

* using map

👉 ek map lenge if node pahale nahi present to true karenge aur yadi pahale present hai to is vale node ko delete kar denge.
