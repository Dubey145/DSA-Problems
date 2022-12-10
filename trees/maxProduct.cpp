https://leetcode.com/problems/maximum-product-of-splitted-binary-tree/
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
    long long totalSum = 0;
    long long max_product = INT_MIN;

    void traversal(TreeNode * root)
        {
            if(root == NULL) return;
            totalSum+=root->val;
            traversal(root->left);
            traversal(root->right);
        }
    int subTreeSum(TreeNode* root)
        {
            if(root == NULL)
                return 0;
            long long left = subTreeSum(root->left);
            long long leftProduct = (totalSum - left) * left;
            long long right = subTreeSum(root->right);
            long long rightProduct = (totalSum - right) * right;
            
            long long  tempMax = max(rightProduct,leftProduct);
            max_product = max(max_product,tempMax);

            return left+right+root->val;
        }
    int maxProduct(TreeNode* root) 
    {
        traversal(root);
        subTreeSum(root);
        return max_product%1000000007;
    }
};

