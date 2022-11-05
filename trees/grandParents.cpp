//https://leetcode.com/problems/sum-of-nodes-with-even-valued-grandparent/
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
    int sum = 0;
    int sumEvenGrandparent(TreeNode* root){
        dfs(root,NULL,NULL);
        return sum;
    }
    void dfs(TreeNode* current, TreeNode* parent, TreeNode* grandParent)
    {
        if(current == NULL ) return;
        if(grandParent != NULL && (grandParent->val)%2 == 0)
        {
            sum+=current->val;
        }
        dfs(current->left,current,parent);
        dfs(current->right,current,parent);
    }
};
