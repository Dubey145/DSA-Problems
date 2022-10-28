//https://leetcode.com/problems/binary-tree-inorder-traversal/
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
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int> data;
        stack<TreeNode*> nodes;
        
        TreeNode * node = root;
        while(true)
        {
            if(node!=NULL)
            {
                nodes.push(node);
                node = node->left;
            }
            else 
            {
                if(nodes.empty())
                    break;
                node = nodes.top();
                nodes.pop();
                data.push_back(node->val);
                node = node->right;
            }
        }
        return data;
    }
};
