#include "IntegerArrayQueue.h"

bool IntegerArrayQueue::enqueue(int value)
{
    
    if(front == 0)
    {
        array[back] = value;
        ++back;
        cout << "HERE" << endl;
        return true;
    }
    return false;
}

int IntegerArrayQueue::dequeue()
{
   /* if (front == - 1 || front > back) 
    {
        return 0;
    } 
    else 
    {
        return array[front];
    }*/
    return array[front];
}