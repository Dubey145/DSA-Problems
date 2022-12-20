#include<iostream>
using namespace std;

class base
    {
        int x;

        public:
            base(int x )
                {
                    this->x = x;
                }
            void print()
                {
                    cout<<this->x;
                }
            //friend void set(base*, int); for friend function
            friend class getSet;
    };
//friend function
// void set( base* b, int x)
//     {
//         b->x = x;
//     }

//friend class 
class getSet
    {
        public:
        void set(base * b, int x)
            {
                b->x = x;
            }
        void get(base* b)
            {
                cout<<b->x;
            }
        
    };

int main()
    {
        base b1(10);
        //set(&b1,20);
        getSet obj;
        obj.set(&b1,20);
        obj.get(&b1);

        //b1.print();
    }
