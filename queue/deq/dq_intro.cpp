// problem link : DeQueue
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
Dequeue stands for doubly ended queue
in deq insert and delete can happen from both ends 
Functions

insertFront()
deleteFront()
insertRear()
deleteRear()

getFront()
getRear()
isFull()
isEmpty()
size()

implementation can be done using doubly linked list and arrays
to keep the time complexity at O(1)
even if we maintain a tail pointer, deletion from the end will not be of O(1)
so we use doubly linked list
in dll
tail->prev = tail;
tail->next = NULL;

For Array implementation we use a circular array
tc will still be o(1)

Application
1. can be used as a stack as well as a queue
2. browser history
3. implementation of priority q with 2 priorities
4. A steel algorithm (multi processor scheduling algo)
5. maximum and minimum of all subarrays of size k in a given array
*/

int main()
    {
        vector<int> nums{};


        return 0;
    }