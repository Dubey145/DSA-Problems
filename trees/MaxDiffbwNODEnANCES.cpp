//https://leetcode.com/problems/maximum-difference-between-node-and-ancestor

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
    int maxDiff = INT_MIN;
    void traverse(TreeNode* root,int currentMax, int currentMin)
        {
            if(root == NULL)
                {
                    int currentDiff = currentMax - currentMin;
                    maxDiff = max(currentDiff, maxDiff);
                    return;
                }
            currentMax = max(currentMax, root->val);
            currentMin = min(currentMin, root->val);

            traverse(root->left,currentMax,currentMin);
            traverse(root->right,currentMax, currentMin);
        }
    int maxAncestorDiff(TreeNode* root) 
    {
        traverse(root,root->val,root->val);
        return maxDiff;
    }
};
