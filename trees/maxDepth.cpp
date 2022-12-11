//https://leetcode.com/problems/maximum-depth-of-binary-tree

class Solution {
public:
    int maxHeight = 0;
    void traverse(TreeNode * root, int depth)
        {
            if(root == NULL)
                {
                    maxHeight = max(maxHeight,depth);
                    return;
                }
            traverse(root->left,depth+1);
            traverse(root->right,depth+1);
        }
    int maxDepth(TreeNode* root) 
        {
            traverse(root,0);
            return maxHeight;
        }
};
