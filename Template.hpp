#ifndef QUEUE
#define QUEUE
#include "Mechanic.hpp"
#include "Appo.hpp"
template <class T>
class Queue
{
private:
    int front;
    int rear;
    int counter;
    int maxSize;
    T* values;
public:
    Queue(int);
    bool IsEmpty();
    bool IsFull();
    bool Enqueue(T x);
    bool Dequeue(T x);
    void DisplayQueue();
    void print();
    
    
};

#endif /* Queue_h */
