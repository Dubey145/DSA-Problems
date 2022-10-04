#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
arrays - stores at contiguous locations 
in java ArrayList is a vector

problems with arrays 
1. we have to preallocate space- this problem is solved by dynamic size arrays 
2. insertion in the middle or the start is costly
3. same for deletion
4. efficient implementation of queue is not possible with arrays but it is very easy with linked lists

Linked list is a linear data structure but it is not contiguous 
the elements store the address of the next node this is how the ds is linear
there is no pre allocation of memory, 
*/

//simple implementation of a linked list
class node
    {
        public: 
            int data;
            node* next;
            
            node(int value)
                {
                    data = value;
                    next = NULL;
                }
            int size(node* head)
                {
                    int counter = 0;
                    while(head!=NULL)
                        {
                            counter++;
                            head=head->next;
                        }
                    return counter;
                }
            void print(node *head)
                {
                    //node* temp = head; // even if you dont use temp , you will not lose data because head variable will be copied in the function like all other variables
                    while(head!= NULL)
                        {
                            cout<<head->data<<" ";
                            head = head->next;
                        }
                }
            node* insert_begin(int element,node* head)
                {
                    node *temp_node =new node(element);
                    temp_node->next = head;
                    head = temp_node;
                    return head;
                }
            void insert_end(int element, node*head)
                {
                    node* temp_node = new node(element);
                    while(head->next != NULL)
                        {
                            head = head->next;
                        }
                    head->next = temp_node;
                }
            node* delete_first(node* head)
                {
                    return head->next;
                }
            node* delete_last(node* head)
                {
                    if(head == NULL || head->next == NULL)
                        {
                            head = NULL;
                            return head;
                        }
                    node* temp = head;
                    while(head->next->next!=NULL)
                        { 
                            head = head->next;
                        }
                    head->next = NULL;
                    return temp;
                }
            node* insert_at_pos(int element, int pos, node* head)
                {
                    if(pos == 0) 
                        {
                            head = insert_begin(element,head);
                            return head;
                        }
                    if(pos>=head->size(head)) 
                        {
                            insert_end(element,head);
                            return head;
                        }
                    node* temp = new node(element);
                    int counter = 0;
                    node * current = head;
                    while(current != NULL & counter != pos-1 )
                        {
                            current = current->next;
                            counter++;
                        }
                    temp->next = current->next;
                    current->next = temp;
                    return head;
                }
            void search(int element,node* head)
                {
                    int counter = 0;
                    bool found = false;
                    while(head != NULL)
                        {
                            if(head->data == element)
                                {
                                    cout<<"found at index "<<counter<<endl;
                                    found = true;
                                }
                            head = head->next;
                            counter++;
                        }
                    if(!found) cout<<"element not in LL "<<endl;
                }
            void recursive_search(int element, node* head) 
                {
                    if(head == NULL)
                        {
                            cout<<"\nelement not found in LL"<<endl;
                            return;
                        }
                    if(head->data == element)
                        {
                            cout<<"\nelement found in LL\n";
                        }
                    else 
                        {
                            head = head->next;
                            recursive_search(element,head);
                        }

                }
    };
int main()
    {
        node *n1 = new node(10);
        node *n2 = new node(20);
        node *n3 = new node(30);
        
        node *head = n1;

        n1->next = n2;
        n2->next = n3;
        n3->next= NULL;

        node *temp = head;
        n1->print(head);
        cout<<endl;
        // head = NULL;
        // head = n1->insert_begin(90,head);
        // cout<<endl;
        // n1->print(head);
        // head->insert_end(25,head);
        // head->print(head);

        // cout<<endl<<"deleting first element"<<endl;
        // head = head->delete_first(head);
        // head->print(head);
        
        //deleting last element;
        
        // head = head->delete_last(head);

        int element = 99;
        head = head->insert_at_pos(element, 1, head);

        head->search(element,head);

        head->recursive_search(100,head);
        head->print(head);
        return 0;
    }