// problem link : Circular Linked List in cpp
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
The last node is connected to the first node
Advantages
1. We can traverse the whole list from any node
2. Implementation of algo like round robin 
3. insert at begin/end by just maintaining tail pointer

Disadvantages
1. Implementation of operations become complex
*/

class node
    {
        public :
        int data;
        node* next;
        node(int data)
            {
                this->data = data;
                next = NULL;
            }
        void print(node * head)
            {
                // if(head == NULL) return;

                // cout<<head->data<<" ";

                // while(temp!=head)
                //     {
                //         cout<<temp->data<<" ";
                //         temp = temp->next;
                //     }
                //for(node *p = head->next; p!=head; p=p->next)
                
                node* temp = head;
                do
                    {
                        cout<<temp->data<<" ";
                        temp=temp->next;
                    }while(temp != head);
            }
    };

int main()
    {
        node* n1 = new node(10);
        node* n2 = new node(20);
        node* n3 = new node(30);

        n1->next = n2;
        n2->next = n3;
        n3->next = n1;

        node* head = n1;
        
        head->print(head);

        return 0;
    }
