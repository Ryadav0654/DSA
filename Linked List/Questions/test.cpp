#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Node
{

public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertNodeAfterHead(Node *&tail, int new_data)
{

    Node *new_node = new Node(new_data);
    new_node->next = NULL;

    tail->next = new_node;
    tail = new_node;
}

void Print(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

/*
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
*/
/*
bool isCircular(Node* head){
    if(head == NULL){
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head){
        temp = temp -> next;
    }

    if(temp == head){
        return true;
    }

    return false;
}


bool detectLoop(Node* head){

    //empty linked list
    if(head == NULL){
        return false;
    }

    map<Node* , bool> visited;
    Node* temp = head;
    while(temp != NULL){

        if(visited[temp] == true){
            cout << "loop start at : " << temp -> data << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;
    }

    return false;
}


Node* isCyclePresent(Node *head)
{

    // empty linked list
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {

        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
        {
            return fast;
        }
    }

    return NULL;
}

Node* getStartingLoopNode(Node* head){

    //empty linked list
    if(head == NULL){
        return NULL;
    }

    //find intersection point using fcd
    Node* intersection = isCyclePresent(head);
    Node* slow = head;
    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }

    /* or

    Node* slow = head;
    Node* fast = intersection;
    while(slow != fast){
        slow = slow -> next;
        fast = fast -> next;
    }


    return slow;
}



void removeLoop(Node* head){

    if(head == NULL){
        return ;
    }

    Node* startNode = getStartingLoopNode(head);
    Node* temp = startNode;
    while(temp-> next != startNode){
        temp = temp-> next;
    }

    temp -> next = NULL;
}



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



void removeNodeFromUnsortedLL(Node *head)
{

    if (head == NULL)
    {
        return;
    }

    Node *visitedNode = head;
    while (visitedNode != NULL)
    {
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



void insertAtTail(Node *&tail, Node *curr)
{
    tail->next = curr;
    tail = curr;
}
Node *sortList(Node *head)
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

        curr = curr->next;
    }

    // merge these linked list

    // one ki list empty na ho to
    if (oneHead->next != NULL)
    {
        zeroTail->next = oneHead->next;
    }
    else
    {
        zeroTail->next = twoHead->next;
    }

    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    head = zeroHead->next;

    // delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}



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



Node* solve(Node* first, Node* second){

    // yadi first list me ek node ho
    if(first -> next == NULL){
        first -> next = second;
        return first;
    }

    //define pointers

    Node* curr1 = first;
    Node* next1 = curr1 -> next;
    Node* curr2 = second;
    Node* next2 = curr2 -> next;

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

Node* sortTwoLists(Node* first, Node* second){

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

bool checkPalidrome(Node* head, Node* mid){

    while(mid -> next != NULL){
        if(head -> data != mid -> next-> data){
            return false;
        }
        head = head-> next;
        mid = mid -> next;
    }

    return true;

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

bool isPalidrome(Node *head)
{
    if(head -> next == NULL){
        return true;
    }

    // step1- find middle node
    Node* mid = getMid(head);
    cout << "mid: " << mid-> data << endl;

    //step2-  reverse the list after mid
    Node* temp = mid-> next;
    mid-> next = reverseNode(temp);

    //step-3 check list is palidrome or not(compare both parts)
    Node* head1 = head;
    Node* head2 = mid-> next;
    bool ans = checkPalidrome(head1, head2);

    //step4- repeate step2
    temp = mid-> next;
    mid-> next = reverseNode(temp);

    return ans;
}

*/

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

void insertAtTail(Node *&ansHead, Node *&ansTail, int val)
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

/*
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



// function to add the two linked list.
Node *add(Node *first, Node *second)
{
    Node *ansHead = NULL;
    Node *ansTail = NULL;

    int carry = 0;

    // jab dono list ke node null na ho
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

Node *addTwoList(Node *first, Node *second)
{

    // step1- reverse the list
    first = reverseList(first);
    second = reverseList(second);

    // step2- add the list and store
    Node *ans = add(first, second);

    // step3- revese the ans list
    ans = reverseList(ans);

    // step4- return ans;
    return ans;
}


Node* CloneLL(Node* head){

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

    while(originalNode != NULL){
        cloneNode -> random = oldToNewNode[originalNode -> random];
        originalNode = originalNode-> next;
        cloneNode = cloneNode -> next;
    }

    return cloneHead;
}



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

*/

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

    while(left != NULL){
         temp -> next = left;
        temp = left;
        left = left -> next;
    }

    while(right != NULL){
         temp -> next = right;
        temp = right;
        right = right -> next;
    }

    ans = ans -> next;

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

int main(int argc, char const *argv[])
{

    // first linked list
    Node *head1 = new Node(4);
    head1->next = NULL;
    Node *tail1 = head1;

    InsertNodeAfterHead(tail1, 5);
    InsertNodeAfterHead(tail1, 3);
    InsertNodeAfterHead(tail1, 13);
    InsertNodeAfterHead(tail1, 2);
    InsertNodeAfterHead(tail1, 10);
    // InsertNodeAfterHead(tail, 13);

    // Print(head);
    // cout << "revese ll: ";
    // Node* ans = reverseNode(head);
    // Print(ans);

    // second linked list
    // Node *head2 = new Node(3);
    // head2->next = NULL;
    // Node *tail2 = head2;

    // InsertNodeAfterHead(tail2, 4);
    // InsertNodeAfterHead(tail2, 5);
    // InsertNodeAfterHead(tail2, 12);
    // InsertNodeAfterHead(tail2, 15);
    // InsertNodeAfterHead(tail2, 18);
    // InsertNodeAfterHead(tail2, 20);

    cout << "first list: ";
    Print(head1);
    // cout << "second list: ";
    // Print(head2);
    Node* mergehead = mergeSort(head1);
    cout << "sorted list: ";
    Print(mergehead);
    // Node *ans = addTwoList(head1, head2);
    // Print(ans);

    /*

    if (isPalidrome(head))
    {
     cout << "Linked list is Palidrome." << endl;
    }
     else
    {
    cout << "linked list is not palidrome" << endl;
    }

 Print(head);



    Node* head = sortTwoLists(head1, head2);
    cout << "after merging Linked List Elements: " << endl;
    Print(head);


     tail -> next  = head -> next -> next;

    cout << "before removing the loop: " << endl;
    if (isCyclePresent(head))
    {
        cout << "cycle is present." << endl;
    }
    else
    {
        cout << "cycle is not present." << endl;
    }

    Node* startNode = getStartingLoopNode(head);
    cout << "loop starts at: " << startNode -> data << endl;
    removeLoop(head);

    cout << "after removing the loop: " << endl;

    if (isCyclePresent(head))
    {
        cout << "cycle is present." << endl;
    }
    else
    {
        cout << "cycle is not present." << endl;
    }

    int k;
    cout << "Enter the value of K: ";
    cin >> k;
    Node* ans = reverseAtK(head, k);

    cout << endl;
    Print(ans);
    */

    return 0;
};