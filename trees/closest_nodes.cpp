//https://leetcode.com/problems/closest-nodes-queries-in-a-binary-search-tree/
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
    vector<int> elements;
    vector<vector<int>> solved;
    void getElements(TreeNode * root)
    {
        if(root == NULL) return;
        
        getElements(root->left);
        elements.push_back(root->val);
        getElements(root->right);
    }
vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) 
    {
        getElements(root);    
        for(int number : queries)
        {
            int start = 0;
            int end = elements.size()-1;
            int mid;

            int index = -1;

            while(start<=end)
            {
                mid = start+((end-start)/2);

                if(elements[mid] == number)
                {
                    index = mid;
                    break;
                }
                else if(elements[mid]>number)
                {
                    end = mid-1;
                }
                else 
                {
                    index = mid;
                    start = mid + 1;
                }
            }
            if(index != -1 && elements[index] == number)
            {
                solved.push_back({number,number});
            }
            else
            {
                if(index == -1)
                {
                    solved.push_back({-1,elements[0]});
                }
                else if(index == elements.size()-1)
                {
                    solved.push_back({elements[index],-1});
                }
                else
                {
                    solved.push_back({elements[index],elements[index+1]});
                }  
            }   
        }
        return solved;
    }
};
