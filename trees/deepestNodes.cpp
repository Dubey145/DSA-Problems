//https://leetcode.com/problems/deepest-leaves-sum/

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
    int deepestLeavesSum(TreeNode* root) 
    {
        queue<TreeNode*> level;
        level.push(root);
        level.push(NULL);
        int currentSum = 0;
        
        while(level.size()>1)
        {
            TreeNode * node = level.front();
            level.pop();

            if(node == NULL)
            {
                currentSum = 0;
                level.push(NULL);
                continue;
            }
            else
            {       
                currentSum+= node->val;
            }
            
            if(node->left != NULL)
            {
                level.push(node->left);
            }
            if(node->right != NULL)
            {
                 level.push(node->right);
            }
        }
        return currentSum;
    }
};
