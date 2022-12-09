//https://leetcode.com/problems/path-sum/submissions/857065329/

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
    bool traversal(TreeNode * root, int targetSum, int currentSum)
        {
            if(root == NULL) return false;
            if(root->left == NULL && root->right == NULL)
            {   
                currentSum += root->val;
                return currentSum == targetSum;
            }    
            currentSum += root->val;
            bool left = traversal(root->left,targetSum,currentSum);
            bool right = traversal(root->right,targetSum,currentSum);
            return left||right;
        }
    bool hasPathSum(TreeNode* root, int targetSum) 
    {   
        if(root == NULL) return false;

        return traversal(root,targetSum,0);
    }
};
