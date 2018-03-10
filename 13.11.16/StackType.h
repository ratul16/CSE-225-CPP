#ifndef STACCKTYPE_H
#define STACCKTYPE_H
#include "ItemType.h"

class StackType
{
public:
    StackType();
    bool isFull();
    bool isEmpty();
    void Push(ItemType item);
    ItemType Pop();
    ItemType Top();
    void PrintStack();
private:
    int top;
    ItemType item[MAX_ITEMS];
};


#endif // STACCKTYPE_H
