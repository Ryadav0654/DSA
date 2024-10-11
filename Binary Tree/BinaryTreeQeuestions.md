# Binary Tree Questions:

## Question 1:

> https://www.naukri.com/code360/problems/count-leaf-nodes_893055?source=youtube&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio

### Code:

```C++
void leafNodeCnt(BinaryTreeNode<int> * root, int & cnt){

    if(root == NULL){
        return ;
    }

    leafNodeCnt(root-> left, cnt);
    if(root-> left == NULL && root -> right == NULL){
        cnt++;
    }

    leafNodeCnt(root-> right, cnt);

}

int noOfLeafNodes(BinaryTreeNode<int> *root){
        int cnt = 0;
        leafNodeCnt(root, cnt);
        return cnt;
}
```

# height of the Binary Tree:

> link: https://www.geeksforgeeks.org/problems/height-of-binary-tree/1

## Code:

```C++
int height(Node* root){

    // base case
    if(root == NULL){
        return 0;
    }

    // find the height of left side
    int left_height = height(root-> left);

    // find the height of right side
    int right_height = height(root -> right);

    // here 1 add for root node
    int ans = max(left_height, right_height) + 1;

    return ans;
}
```

```text
- Time Complexity: O(N), where N is the number of nodes.
- Space Complexity: O(h), where h is the height of tree.

```

# Diameter of Binary Tree:

> link:https://www.geeksforgeeks.org/problems/diameter-of-binary-tree/1

## Code:(Brute force)

```C++
int height(Node* root){

    // base case
    if(root == NULL){
        return 0;
    }

    // find the height of left side
    int left_height = height(root-> left);

    // find the height of right side
    int right_height = height(root -> right);

    // here 1 add for root node
    int ans = max(left_height, right_height) + 1;

    return ans;
}

int diameter(Node* root){

    // base case
    if(root == NULL){
        return 0;
    }

    // find diameter of left part
    int left = dimeter(root-> left);

    // find diameter of right part
    int right = dimeter(root-> right);

    // if diameter having both parts
    int both_part = height(root-> left) + height(root-> right) + 1;

    int ans = max(left, max(right, both_part));

    return ans;
}
```

```text
- Time Complexity: O(N^2), where N is the number of nodes.
- Space Complexity: O(h), where h is the height of tree.

```

## Code:(optimize approach)

```C++
// pair<Diameter, height>
pair<int, int> diameterFast(Node* root){

    // base case
    if(root == NULL){
        pair<int, int> p = make_pair(0, 0);
        return p;
    }

    // find the diameter and height of left part
    pair<int, int>left = diameterFast(root-> left);

    // find the diameter and height of right part
    pair<int, int>right = diameterFast(root-> right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;

    pair<int, int> ans;
    ans.first = max(op1, max(op2, op3));
    ans.second = max(left.second, right.second) + 1;

    return ans;
}

int diameter(Node* root){
    // return diameter of tree
    return diameterFast(root).first;
}
```

```text
- Time Complexity: O(N), where N is the number of nodes.
- Space Complexity: O(h), where h is the height of tree.

```

# Check Binary Tree is Balanced or not:

> link: https://www.geeksforgeeks.org/problems/check-for-balanced-tree/1

> A tree is height balanced if difference between heights of left and right subtrees is not more than one for all nodes of tree.

## Code:(Brute force)

```C++
int height(Node* root){

    // base case
    if(root == NULL){
        return 0;
    }

    // find the height of left side
    int left_height = height(root-> left);

    // find the height of right side
    int right_height = height(root -> right);

    // here 1 add for root node
    int ans = max(left_height, right_height) + 1;

    return ans;
}

bool isBalanced(Node* root){

    // base case
    if(root == NULL){
        return true;
    }

    // check left part is balanced or not
    bool left = isBalanced(root-> left);

    // check right part is balanced or not
    bool right = isBalanced(root-> right);

    // if left and right part is balanced
    bool diff = abs(height(root-> left) - height(root-> right)) <= 1;

    if(left && right && diff){
        return true;
    }else{
        return false;
    }
}
```

```text
- Time Complexity: O(N^2), where N is the number of nodes.
- Space Complexity: O(h), where h is the height of tree.

```

## Code:(optimize approach)

```C++
// pair<isBalaced, height>
pair<bool, int> isBalancedFast(Node* root){

     // base case
    if(root == NULL){
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }

    // check left part is balanced or not
    pair<bool, int> left = isBalancedFast(root-> left);

    // check right part is balanced or not
    pair<bool, int> right = isBalancedFast(root-> right);

    bool leftAns = left.first;
    bool rightAns = right.first;

    // if left and right part is balanced
    bool diff = abs(left.second - right.second) <= 1;

    pair<bool, int> ans;
    ans.second = max(left.second, right.second) + 1;

    if(leftAns && rightAns && diff){
         ans.first = true;
    }else{
        ans.first = false;
    }

    return ans;
}

bool isBalanced(Node* root){

    return isBalancedFast(root).first;
}
```

```text
- Time Complexity: O(N), where N is the number of nodes.
- Space Complexity: O(h), where h is the height of tree.

```

# check Binary Tree is Identical or not:

> link: https://www.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1

> A SumTree is a Binary Tree where the value of a node is equal to the sum of the nodes present in its left subtree and right subtree. An empty tree is also a Sum Tree as the sum of an empty tree can be considered to be 0. A leaf node is also considered a Sum Tree.

## Code:

```C++
class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        if(r1 == NULL && r2 == NULL){
            return true;
        }

        if((r1 == NULL && r2 != NULL) || (r1 != NULL && r2 == NULL)){
            return false;
        }

        bool isleft = isIdentical(r1-> left, r2-> left);
        bool isright = isIdentical(r1->right, r2-> right);

        // check values is same or not
        bool isvalue = r1-> data == r2-> data;

        if(isleft && isright && isvalue){
            return true;
        }else{
            return false;
        }
    }
};
```

```text
- Time Complexity: O(N), where N is the number of nodes.
- Space Complexity: O(h), where h is the height of tree.
```

# check Binary Tree is sumTree or not:

> link: https://www.geeksforgeeks.org/problems/sum-tree/1

## Code:

```C++
class Solution {
    private:
    pair<bool, int> isSumTreeFast(Node* root){

        if(root == NULL){
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }

        if(root->left == NULL && root-> right == NULL){
            pair<bool, int> p = make_pair(true, root->data);
            return p;
        }



        pair<bool, int> left = isSumTreeFast(root->left);
        pair<bool, int> right = isSumTreeFast(root->right);

        int  sum = (left.second + right.second);

        pair<bool, int> ans;
        if(sum == root -> data && left.first && right.first){
            ans.first = true;
            ans.second = sum + (root -> data);
        }else{
            ans.first = false;
        }

        return ans;
    }
  public:
    bool isSumTree(Node* root) {
        return isSumTreeFast(root).first;
    }
};
```

```text
- Time Complexity: O(N), where N is the number of nodes.
- Space Complexity: O(h), where h is the height of tree.
```
