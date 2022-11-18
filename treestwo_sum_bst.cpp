//https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
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
    unordered_set<int> elements;
    void traversal(TreeNode* root)
    {
        if(root == NULL) return;
        
        elements.insert(root->val);
        traversal(root->left);
        traversal(root->right);
    }
    bool findTarget(TreeNode* root, int k) 
    {
        traversal(root);
        for(auto value : elements)    
        {
            if(k-value != value && elements.find(k-value) != elements.end())
            {
                return true;
            }
        }
        return false;
    }
};
