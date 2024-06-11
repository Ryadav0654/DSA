# Function to reverse the linked list in K groups:

> Question link: 
> https://www.naukri.com/code360/problems/reverse-list-in-k-groups_983644?leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbar_codestudio_26thjan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar_codestudio_26thjan

## Approach:
* 1 case solve karenge(Itreative way se) means first k nodes reverse kardenge baki recursion karlega
* recursion ke output ko case se jod denge .

## Code:
```C++
Node* reverseAtK(Node *head, int k)
{
    // base case
    if(head == NULL){
        return NULL;
    }

    //Step1: reverse first K nodes
    Node *curr = head;
    Node *prev = NULL;
    Node *temp = NULL;
    int cnt = 0;

    while (curr != NULL && cnt < k)
    {
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
        cnt++;
    }

    //Step2: recursion karlega
    if(temp != NULL){
    head->next = reverseAtK(curr, k);

    }

    //Step3: return head of reverse Linked list
    return prev;
}

```

```text
 Time Complexity: O(n)
 Space Complexity: O(n)
```