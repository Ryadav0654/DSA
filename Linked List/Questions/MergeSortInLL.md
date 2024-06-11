# Merge sort in Linked list:

> Question link:
> https://www.naukri.com/code360/problems/mergesort-linked-list_630514?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_CodestudioLovebabbar5thfeb&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_CodestudioLovebabbar5thfeb

### Approach:

- find mid of the list
- break list into two part
- sort both the halves
- merge both the sorted list
- return merge list

### Code:

```C++

Node* getMid(Node* head){

    Node* slow = head;
    Node* fast = head -> next;

    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    return slow;
}

Node* merge(Node* left, Node* right){

    //left list null hai
    if(left == NULL){
        return right;

    }
    // right list null hai
    if(right == NULL){
        return left;
    }

    Node* ans = new Node(-1);
    Node* temp = ans;

    //merge two sorted list
    while(left != NULL && right != NULL){
        if(left -> data < right -> data){
        temp -> next = left;
        temp = left;
        left = left -> next;

        }else{

        temp -> next = right;
        temp = right;
        right = right -> next;
        }
    }

    //left list having more node
    while(left != NULL){
         temp -> next = left;
        temp = left;
        left = left -> next;
    }

    //right list having more node

    while(right != NULL){
         temp -> next = right;
        temp = right;
        right = right -> next;
    }

    //remove dummy node
    ans = ans -> next;

    //return ans
    return ans;
}

Node* mergeSort(Node* head){

    //empty or one node list
    if(head == NULL || head -> next == NULL){

        return head;
    }

    // get mid node of the list
    Node* mid = getMid(head);

    Node* left = head;
    Node* right = mid -> next;
    mid -> next = NULL;

    //sort both the left and right list
    //recursive call
    left = mergeSort(left);
    right = mergeSort(right);

    //merge both left and right list
    Node * result = merge(left, right);

    return result;
}

```

```text
    Time Complexity: O(nlog(n)), where n is the nodes of the list.
    Space Complexity: O(log(n))
```
