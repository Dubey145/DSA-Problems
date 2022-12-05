//https://leetcode.com/problems/binary-tree-paths/submissions/

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
    vector<string> paths;

    void getPaths(TreeNode * root, string currentPath)
    {
        if(root == nullptr)return;
        if(root->left == nullptr && root->right == nullptr)
        {
            currentPath += to_string(root->val);
            cout<<currentPath<<endl;
            paths.push_back(currentPath);
            return;
        }
        currentPath += to_string(root->val);
        currentPath += "->";
        getPaths(root->left,currentPath);
        getPaths(root->right,currentPath);
    }
    vector<string> binaryTreePaths(TreeNode* root) 
    {
        getPaths(root,"");
        return paths;
    }
};
