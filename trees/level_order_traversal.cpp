// problem link : level order traversal - BFS
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

class node
    {
        public:
        int data;
        node*left;
        node*right;

        node(int data)
            {
                this->data = data;
                left = NULL;
                right = NULL;
            }
        //we can find the height of the binary tree and then print nodes at all k distances
        void level(node* root)
            {
                if(root == NULL)
                    return;
                else
                    {
                        if(root->left!=NULL)
                            cout<<root->left->data<<" ";
                        if(root->right!=NULL)
                            cout<<root->right->data<<" ";
                        level(root->left);
                        level(root->right);
                    }
            }
        void iLevel(node* root)
            {
                if(root == NULL)
                    return;
                queue<node*>q;
                q.push(root);
                while(!q.empty())
                    {
                        node* current = q.front();
                        q.pop();
                        cout<<current->data<<" ";
                        if(current->left!=NULL)
                            {
                                q.push(current->left);
                            }
                        if(current->right!=NULL)
                            {
                                q.push(current->right);
                            }    
                    }
            }
        void lineLevel(node* root)
            {
                if(root == NULL)
                    return;
                queue<node*>q;
                q.push(root);
                q.push(NULL);
                while(q.size()>1)
                    {
                        node* current = q.front();
                        q.pop();
                        if(current == NULL)
                            {
                                //a null would mean that you have reached the end of the current level
                                cout<<endl;
                                q.push(NULL);
                                continue;
                            }
                        cout<<current->data<<" ";
                        if(current->left!=NULL)
                            {
                                q.push(current->left);
                            }
                        if(current->right!=NULL)
                            {
                                q.push(current->right);
                            } 
                        
                    }
                //TC : O(N)
                //SC : O(N)
                //METHOD 2 - use a for loop till the q size because we will have one level in the queue so once the loop ends print a new line and in the loop print elements
            }
    };
int main()
    {
        vector<int> nums{};
        node* n1 = new node(10);
        node* n2 = new node(20);
        node* n3 = new node(30);
        node* n4 = new node(8);
        node* n5 = new node(7);
        node* n7 = new node(6);
        node* n8 = new node(9);
        node* n9 = new node(15);

        node* root = n1;
        n1->left = n2;
        n1->right = n3;

        n2->left = n4;
        n2->right = n5;

        n3->right = n7; 

        n5->left = n8;
        n5->right = n9;

        //if i print the root first it solves the problem
        //cout<<root->data<<" ";
        root->lineLevel(root);

        return 0;
    }