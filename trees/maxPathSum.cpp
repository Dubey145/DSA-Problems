//https://leetcode.com/problems/binary-tree-maximum-path-sum/submissions/858096681/

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
    int maxPath = INT_MIN;
    int traverse(TreeNode* root)
        {
            if(root == NULL) return 0;
            int left = traverse(root->left);
            int right = traverse(root->right);

            int straightPath = max(root->val,max(root->val+left,root->val+right));
            int curvedPath = left+right+root->val;
            
            int currentMaxPath = max(straightPath, curvedPath);
            maxPath = max(maxPath, currentMaxPath);
            return straightPath;

        }
    int maxPathSum(TreeNode* root) 
    {
        //cases node, node + left, node + right, node + left + right
        traverse(root);
        return maxPath; 

    }
};
