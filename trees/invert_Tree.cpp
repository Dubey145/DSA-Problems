//https://leetcode.com/submissions/detail/846842898/
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
    TreeNode * traversal(TreeNode* root)
    {
        if(root == NULL) return NULL;
            
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        
        traversal(root->left);
        traversal(root->right);
        return root;
    }
    TreeNode* invertTree(TreeNode* root) {
        root = traversal(root);
        return root;
    }
};
