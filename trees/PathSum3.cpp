//https://leetcode.com/problems/path-sum-iii/submissions/857094713/
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
    int count = 0;
    void traversal(TreeNode * root, int targetSum, long long currentSum)
        {
            if(root == NULL) return;
            
            currentSum += root->val;

            if(currentSum == targetSum) count++;

            traversal(root->left,targetSum,currentSum);
            traversal(root->right,targetSum,currentSum);
        }
    void helper(TreeNode * root, int targetSum)
        {
            if(root == NULL) return;
            traversal(root,targetSum,0);
            helper(root->left,targetSum);
            helper(root->right,targetSum);
        }
    int pathSum(TreeNode* root, int targetSum) 
    {
        helper(root,targetSum);
        return count;
    }
};
