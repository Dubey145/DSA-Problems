// problem link : 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//height of a tree is the maximum number of nodes from a root to a leaf path

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
        void printk(node* root, int k)
            {
                //if(root == NULL && k == 0)
                //     return;
                if(root == NULL)
                    return;
                if(k==0)
                    {
                        cout<<root->data<<" ";
                    }
                else
                    {
                        printk(root->left,k-1);
                        printk(root->right, k-1);
                    }
            }
    };
int main()
    {
        vector<int> nums{};
        node* n1 = new node(10);
        node* n2 = new node(20);
        node* n3 = new node(30);
        node* n4 = new node(40);
        node* n5 = new node(50);
        node* n7 = new node(70);

        node* root = n1;
        n1->left = n2;
        n1->right = n3;

        n2->left = n4;
        n2->right = n5;

        n3->right = n7; 

        root->printk(root,2);
        return 0;
    }