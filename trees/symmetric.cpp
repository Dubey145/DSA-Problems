//https://leetcode.com/problems/symmetric-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) 
    {
        return root == NULL || symm(root->left,root->right);
    }
    bool symm(TreeNode* l,TreeNode* r)
    {
        if(l == NULL || r == NULL)
        {
            return l==r;
        }
        if(l->val != r->val)
        {
            return false;
        }
        return symm(l->left,r->right) && symm(l->right,r->left);
    }
};
