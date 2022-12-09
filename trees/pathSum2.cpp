//https://leetcode.com/problems/path-sum-ii/submissions/857068985/

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
    vector<vector<int>> result;
    void traversal(TreeNode* root, vector<int> path, int targetSum, int currentSum)
        {
            if(root == NULL) return;
            path.push_back(root->val);
            currentSum += root->val;
            if(root->right == NULL && root->left == NULL)
                {
                    if(currentSum == targetSum)
                        result.push_back(path);
                    return;
                }
            
            traversal(root->left,path,targetSum,currentSum);
            traversal(root->right,path,targetSum,currentSum);
        }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) 
    {
        if(root == NULL) return{};
        traversal(root,{},targetSum,0);
        return result;
    }
};
