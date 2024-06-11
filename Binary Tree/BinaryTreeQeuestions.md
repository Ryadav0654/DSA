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