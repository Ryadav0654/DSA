# Check palidrome in linked list:

> Question link:

### Approach:

- create an array and store all the linked list data in the array.
- then check palidrome in the array

### Code:

```C++
bool checkPalidrome(vector<int> arr){
    int n =arr.size();
    int s =0;
    int e = n-1;

    while(s <= e){
        if(arr[s] != arr[e]){
            return false;
        }
        s++;
        e--;
    }

    return true;
}
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
       vector<int> arr;
       Node* temp = head;
       while(temp != NULL){
           int val = temp-> data;
           arr.push_back(val);
           temp = temp->next;
       }

       return checkPalidrome(arr);
    }
```

```text
    Time complexity: O(n)
    Space complexity: O(n)
    where n is the nodes of linked list.
```

## Method -2

### Approach:

- find middle
- middle ke aage ki sari nodes ko reverse kardo
- compare both half parts
- repeate second step

### Code:

```C++

    Node* reverseNode(Node* head){

    if(head == NULL){
        return NULL;
    }

    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL){
        Node* nextNode = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nextNode;
    }

    return prev;
}


Node* getMid(Node* head){
    Node *slow = head;
    Node *fast = head -> next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}



    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {

       if(head -> next == NULL){
        return true;
    }

    // step1- find middle node
    Node* mid = getMid(head);


    //step2-  reverse the list after mid
    Node* temp = mid-> next;
    mid-> next = reverseNode(temp);

    //step-3 check list is palidrome or not(compare both parts)
    Node* head1 = head;
    Node* head2 = mid-> next;

     while(head2 != NULL){
        if(head1 -> data != head2-> data){
            return false;
        }
        head1 = head1-> next;
        head2 = head2 -> next;
    }

    //step4- repeate step2
    temp = mid-> next;
    mid-> next = reverseNode(temp);

    return true;

    }

```

```text
    Time complexity: O(n), where n is the nodes of linked list.
    Space complexity: O(1)
```
