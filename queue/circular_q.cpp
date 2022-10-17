// problem link : 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class cq
    {
        int *array;
        int front,rear;
        int size,max_size;

        public:
        cq(int size)
            {
                array = new int(size);
                front = -1;
                rear = -1;
                size = 0;
                max_size = size;
            }
        void enq(int element)
            {
                if(size == 0)
                    {
                        front = 0;
                        rear = 0;
                        array[rear] = element;
                    }
                else if(size!=max_size)
                    {
                        rear = (front+size-1)%max_size;
                        array[rear] = element;
                    }
            }
        void deq()
            {
                if(front == -1)
                    {
                        cout<<"q is empty";
                    }
                else 
                    {
                        front = (front + 1)%max_size;
                        size--;
                    }
            }
    };

int main()
    {


        return 0;
    }