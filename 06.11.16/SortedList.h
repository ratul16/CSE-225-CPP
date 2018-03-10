#ifndef SORTEDLIST_H_INCLUDE
#define SORTEDLIST_H_INCLUDE
#include "ItemType.h"
#define MAX_ITEM 5

class SortedType
{
public:
    SortedType();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void ResetList();
    void InsertItem(ItemType);
    void GetNextItem(ItemType&);
    void RetrieveItem(ItemType&, bool&);
    void DeleteItem(ItemType);
    void PrintList();

private:
    int length;
    ItemType info[MAX_ITEM];
    int currentPos;
};

#endif // SORTEDLIST_H_INCLUDE
