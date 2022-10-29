class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        vector<vector<int>> lines;
        if(root == NULL)
            return{};
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        
        vector<int>line;
        while(q.size()>1)
        {
            TreeNode * current = q.front();
            q.pop();
            if(current == NULL)
            {
                cout<<endl;
                lines.push_back(line);
                line.clear();
                q.push(NULL);
                
                continue;
            }
            cout<<current->val<<" ";
            line.push_back(current->val);
            if(current->left!=NULL)
            {
                q.push(current->left);
            }
            if(current->right != NULL)
            {
                q.push(current->right);
            }
        }
        lines.push_back(line);
        return lines;
    }
};
