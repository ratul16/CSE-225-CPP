#ifndef PQUEUE_H
#define PQUEUE_H
#include "HeapType.h"

class FullPQ{};
class EmptyPQ{};



template<class ItemType>
class PQueue
{
public:
    PQueue(int);
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
    void PrintQueue();

private:
    int length;
    HeapType<ItemType> items;
    int maxItems;

};


#endif // PQUEUE_H
