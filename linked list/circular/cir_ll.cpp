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
                cout<<endl;
            }
        node* insert_begin(node* head,int element)
            {
                //naive approach
                node * newNode = new node(element);
                if(head == NULL)
                    {
                        head = newNode;
                        newNode->next = newNode;
                        return head;
                    }

                node *temp = head->next;
                while(temp->next!=head)
                    {
                        temp= temp->next;
                    }
                temp->next = newNode;
                newNode->next = head;
                head = newNode;
                return head;
            }
        //for tricky questions in LL think about swapping or overwriting data
        node * add_begin(node * head, int element)
            {
                node* newNode = new node(element);

                if(head == NULL)
                    {
                        head = newNode;
                        newNode->next = newNode;
                    }
                else 
                    {
                        //add the element as the 2nd node
                        newNode->next = head->next;
                        head->next = newNode;
                        
                        //swap data of second and first node
                        swap(head->data,newNode->data);
                    }
                return head;
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

        head = head->add_begin(head,25);
        head->print(head);
        return 0;
    }