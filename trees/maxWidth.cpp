//https://leetcode.com/problems/maximum-width-of-binary-tree

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
    int widthOfBinaryTree(TreeNode* root) 
    {
        if(root == NULL) return 0;
        int maxWidth = 0;
        queue<pair<TreeNode*,int>> elements;
        elements.push({root,0});
        
        while(!elements.empty())  
            {
                int size = elements.size();
                int minIndex = elements.front().second;
                int first, last;

                for(int i = 0; i< size; i++)
                    {
                        int currentId = elements.front().second - minIndex;
                        TreeNode * current = elements.front().first;
                        elements.pop();
                        
                        if(i == 0) first = currentId;
                        if(i == size-1) last = currentId;

                        if(current->left != NULL)
                            {
                                elements.push({current->left,(long long)currentId * 2 + 1});
                            }
                        if(current->right != NULL)
                            {
                                elements.push({current->right,(long long)currentId * 2 + 2 });
                            }
                    }
                int currentWidth = last-first+1;
                maxWidth = max(maxWidth, currentWidth);
                cout<<maxWidth<<endl;
            } 
        return maxWidth;
    }
};
