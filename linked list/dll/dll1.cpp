// problem link : Doubly linked list
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
Advantages.
1. traversal can happen both ways - like browser back and forward
2. deletion can happen in o(1) time if a ref to a node is passed
3. insert or delete before a given node
4. insert/delete from both ends in O(1) time by maintaining tail pointer

Disadvantage
1. extra space for prev pointer
2. code is complex
*/

class node 
    {
        public:
            int data;
            node* left;
            node*right;
        node(int element)
            {
                data = element;
                left = NULL;
                right = NULL;
            }
        node* insert_begin(node * head, int element)
            {
                node *temp = new node(element);
                temp->right = head;
                if(head!=NULL)
                    head->left = temp;
                head = temp;
                return head;
            }
        node* reverse(node* head)
            {
                if(head == NULL || head->right == NULL) return head;
                node *prev = NULL;
                node *current = head;

                while(current != NULL)
                    {
                        prev = current->left;
                        current->left = current->right;
                        current->right = prev;
                        //swapped right and left pointer, now to move forward use curr->left because pointers are swapped
                        current = current->left;
                    }
                return prev->left;

            }
        void print(node* head)
            {
                while(head!=NULL)
                    {
                        cout<<head->data<<" ";
                        head = head->right;
                    }
            }
    };

int main()
    {
        //creating 3 nodes
        node n1(10),n2(20),n3(30);

        n1.right = &n2;
        n1.left = NULL;

        n2.right = &n3;
        n2.left = &n1;

        n3.right = NULL;
        n3.left =  &n2;

        node *head = &n1;
        head = head->insert_begin(head,0);

        head = head->reverse(head);
        head->print(head);
        return 0;
    }