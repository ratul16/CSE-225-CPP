#include "StackType.h"
#include <iostream>

using namespace std;

StackType::StackType()
{
    top=-1;
}

bool StackType::isEmpty()
{
    return (top== -1);
}

bool StackType::isFull()
{
    return (top == MAX_ITEMS-1);
}

void StackType:: Push(ItemType newItem)
{
    if(isFull()!=true){
     top ++;
    }
    item[top]= newItem;
}

ItemType StackType::Pop()
{
    ItemType b = item[top];
    if (isEmpty()!=true){
        top--;
    }
    return b;
}

ItemType StackType:: Top()
{
    if(top!= -1)
    return item[top];
}

void StackType:: PrintStack()
{
    int tmp = top ;

    for( int i=tmp ;i>=0;i--){

        item[i].Print();
    }

}
