//https://leetcode.com/problems/binary-tree-level-order-traversal-ii/
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
    vector<vector<int>> buildMatrix(vector<TreeNode*> elements)
    {
        vector<int> level;
        vector<vector<int>> result;
        
        for(int i = elements.size()-2; i>=0; i--)
        {
            if(elements[i]!=NULL)
            {
                level.push_back(elements[i]->val);
            }
            else
            {
                reverse(level.begin(),level.end());
                result.push_back(level);
                level.clear();
            }
        }
        result.push_back(level);
        return result;
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root == NULL) return {};
        vector<TreeNode*> elements;
        vector<vector<int>> result;
        
        elements.push_back(root);
        elements.push_back(NULL);
        int i = 0;
        while(i!=elements.size()-1)
        {
            TreeNode* node = elements[i];
            if(node == NULL)
            {
                elements.push_back(NULL);
                i++;
            }
            else{
                i++;
            if(node->left != NULL)
            {
                elements.push_back(node->left);
            }
            if(node->right != NULL)
            {
                elements.push_back(node->right);
            }}
        }
        cout<<elements.size();
        result = buildMatrix(elements);
        return result;
    }
};
