//https://practice.geeksforgeeks.org/problems/children-sum-parent/1

class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int flag = 1;
    void checkProperty(Node *root)
    {
        int left = 0,right = 0;
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL ) return;
        
        if(root->left != NULL) left = root->left->data;
        if(root->right != NULL) right = root->right->data;
        
        if(root->data != left+right)
            flag = 0;
        checkProperty(root->left);
        checkProperty(root->right);
    }
    
    int isSumProperty(Node *root)
    {
        checkProperty(root);
        return flag;
    }
};
