#include<iostream>
using namespace std;
/*
Binary Trees 
all nodes have at most 2 children 
or degree is atmost 2
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
    };

int main()
    {
        node* root = new node(10);
        root->left = new node(20);
        root->right = new node(30);
        return 0;
    }
