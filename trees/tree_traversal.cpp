#include<iostream>
using namespace std;

/*
breadth first - level wise 
depth first - inorder, postorder, preorder
dfs is a recursive 3 task function 
1. read the current node 
2. read the left subtree 
4. read the right subtree 

inorder - left - root - right  |
preorder - root left right  <-
postorder - left - right - root ->
*/

class node
    {
        public :
        int data;
        node * left;
        node * right;
        node(int data)
            {
                this->data = data;
                left = NULL;
                right = NULL;
            }
        void inorder(node * root)
            {
                if(root == NULL)
                    return;
                else
                    {
                        inorder(root->left);
                        cout<<root->data<<" ";
                        inorder(root->right);
                    }
            }
        void preorder(node* root)
            {
                if(root != NULL)
                    {
                        cout<<root->data<<" ";
                        preorder(root->left);
                        preorder(root->right);
                    }
            }
        void postorder(node* root)
            {
                if(root != NULL)
                    {
                        postorder(root->left);
                        postorder(root->right); 
                        cout<<root->data<<" ";
                    }
            }
    };

int main()
    {
        node* root = new node(10);
        node* n1 = new node(20);
        node* n2 = new node(30);
        root->left = n1;
        root->right = n2;

        node* n3 = new node(40);
        node* n4 = new node(50);
        n2->left = n3;
        n2->right = n4;

        node* n5 =  new node(60);
        n4->left = n5;
        

        root->inorder(root);
        cout<<endl;
        root->preorder(root); 
        cout<<endl;
        root->postorder(root);
        return 0;
    }