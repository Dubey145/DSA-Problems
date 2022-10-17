#include<iostream>
using namespace std;

class queue
    {
        int *array;
        int size;
        int max_cap;
        int front,rear;

        public :

        queue(int size)
            {
                array = new int[size];
                max_cap = size;
                this->size = 0;
                front = -1;
                rear = -1;
            }
        int getSize()
            {
                return size;
            }
        int getFront()
            {
                if(front == -1) 
                    {
                        cout<<"q is empty";
                        return -1;
                    }
                else 
                    return array[front];
            }
        int getRear()
            {
                if(rear == -1) 
                    {
                        cout<<"q is empty";
                        return -1;
                    }
                else 
                    return array[rear];
            }
        bool isEmpty()
            {
                if(size == 0) return true;
                else return false;
            }
        bool ifFull()
            {
                if(size == max_cap) return true;
                else return false;
            }
        void enqueue(int element)
            {
                if(front == -1 && rear == -1)
                    {
                        front++;
                        rear++;
                        array[front] = element;
                        size++;
                    }
                else if(size == max_cap)
                    {
                        cout<<"\nqueue is full";
                    }
                else
                    {
                        rear++;
                        size++;
                        array[rear] = element;
                    }
            }
        void dequeue()
            {
                //keeping front as 0 always 
                if(size == 0)
                    {
                        cout<<"\nQ is empty";
                    }
                else if(size == 1)
                    {
                        front = -1;
                        rear = -1;
                        size--;
                    }
                else
                    {
                        for(int i = front; i <rear;i++)
                            array[i] = array[i+1];
                        rear--;
                        size--;
                    }
            }
        void printQ() 
            {
                if(!isEmpty())
                    {
                        for(int i = 0; i <=rear; i++)
                            cout<<array[i]<<" ";
                    }
            }
        
    };

int main()
    {
        queue q(5);
        cout<<q.getSize()<<endl;
        cout<<q.isEmpty()<<endl;
        q.enqueue(1);
        q.enqueue(2);
        q.enqueue(3);
        cout<<q.getSize()<<endl;
        cout<<q.isEmpty()<<endl;

        q.printQ();
        q.dequeue();
        cout<<endl;
        q.printQ();

        q.enqueue(5);
        cout<<endl;
        q.printQ();
        q.enqueue(9);
        q.enqueue(15);
        
        cout<<endl;
        q.printQ();
        q.enqueue(105);
        cout<<endl;
        q.printQ();

        for(int i = 0 ; i <5; i++) 
            q.dequeue();
        
        cout<<endl<<q.getSize();
        q.dequeue();
        return 0;
    }