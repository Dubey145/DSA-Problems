//https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        if(root == NULL) return{};
        vector<int>level;
        vector<vector<int>>zigzag;
        queue<TreeNode*> nodes;
        int levelNumber = 1;
        
        nodes.push(root);
        nodes.push(NULL);
        
        //zigzag.push_back({root->val});
                
        while(nodes.size()>1)
        {
            TreeNode* current = nodes.front();
            nodes.pop();
            if(current == NULL)
            {
                if(levelNumber%2==0)
                {
                    reverse(level.begin(),level.end());
                }
                levelNumber++;
                zigzag.push_back(level);
                level.clear();
                nodes.push(NULL);
                continue;
            }
            level.push_back(current->val);
            if(current->left!=NULL)
            {
                nodes.push(current->left);
            }
            if(current->right!=NULL)
            {
                nodes.push(current->right);
            }
        }
        if(levelNumber%2==0)
        { 
            reverse(level.begin(),level.end());
        }
        zigzag.push_back(level);
        return zigzag;
    }
};
