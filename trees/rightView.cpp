//https://leetcode.com/problems/binary-tree-right-side-view/

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
    vector<int> rightView;
    int maxLevel = -1;
    //do a preorder but from the right side 
    //at every level we will visit the right most node first so keep track of the levels
    void findRightView(TreeNode* root, int level)
    {
        if(root == NULL) return;
        if(maxLevel < level)
        {
            //we are at a new level
            rightView.push_back(root->val);
            maxLevel = level;
        }
        findRightView(root->right,level+1);
        findRightView(root->left,level+1);
    }
    vector<int> rightSideView(TreeNode* root) 
    {
        findRightView(root,0);
        return rightView;    
    }
};
