#include "PQueue.h"
#include <iostream>

using namespace std;
template<class ItemType>
PQueue<ItemType>::PQueue(int max)
{
    maxItems = max;
    items.elements=new ItemType[max];
    length = 0;
}

template<class ItemType>
void PQueue<ItemType>:: MakeEmpty()
{
    length=0;
}

template<class ItemType>
bool PQueue<ItemType>::IsEmpty()
{
    return length  == 0;
}

template<class ItemType>
bool PQueue<ItemType>::IsFull()
{
    return length == maxItems;
}

template<class ItemType>
void PQueue<ItemType>::Enqueue(ItemType newItem)
{
    if(length==maxItems){
        throw FullPQ();
    }
    else{
     length++;
     items.elements[length-1]=newItem;
     items.ReheapUP(0,length-1);
    }
}

template<class ItemType>
void PQueue<ItemType>::Dequeue(ItemType& item)
{
    if(length==0){
        throw EmptyPQ();
    }
    else{
        item=items.elements[0];
        items.elements[0]= items.elements[length-1];
        length--;
        items.ReheapDown(0,length-1);
    }
}

template<class ItemType>
void PQueue<ItemType>::PrintQueue()
{

    if(IsEmpty()==1){
        cout<<"Its Empty"<<endl;
    }
    else{
    for(int i=0;i<length;i++){
        cout<<items.elements[i]<<endl;
    }
    }


}






