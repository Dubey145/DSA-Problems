//https://leetcode.com/problems/flatten-binary-tree-to-linked-list/

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
    void flatten(TreeNode* root) 
    {
        if(root == NULL) return;
        
        stack<TreeNode*> elements;
        elements.push(root);

        while(elements.empty() == false)
            {
                TreeNode * current = elements.top();
                elements.pop();

                if(current->right!=NULL) elements.push(current->right);
                if(current->left!=NULL) elements.push(current->left);

                if(elements.empty() == false) current->right = elements.top();

                current->left = NULL;
            }
    }
};


