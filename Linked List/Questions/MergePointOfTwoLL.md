# Merge Point of two Linked list:

> Question link:
> https://www.naukri.com/code360/problem-of-the-day/moderate?leftPanelTabValue=PROBLEM

### Approach:

### Code:

```C++

int length(Node *head)
{
    int length = 0;
    Node *tmp = head;

    while (tmp != NULL)
    {
        tmp = tmp->next;
        length++;
    }

    return length;
}

int findIntersection(Node *firstHead, Node *secondHead)
{

    //Get the length of both list
    int firstListLength = length(firstHead), secondListLength = length(secondHead);

    //Move headA and headB to the same start point
    while (firstListLength > secondListLength)
    {
        firstHead = firstHead->next;
        firstListLength--;
    }

    while (firstListLength < secondListLength)
    {
        secondHead = secondHead->next;
        secondListLength--;
    }

    //Find the intersection until end
    while (firstHead != secondHead)
    {
        firstHead = firstHead->next;
        secondHead = secondHead->next;
    }

    if (firstHead == NULL)
    {
        return -1;
    }

    return firstHead->data;
}
```

```text
    Time Complexity : O(N)
    Space Complexity : O(1)

    where N is the maximum length of linked list.
```
