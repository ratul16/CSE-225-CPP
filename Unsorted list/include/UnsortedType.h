#ifndef UNSORTEDTYPE_H
#define UNSORTEDTYPE_H
#include "itemtype.h"
#define MAX_ITEM 5

class UnsortedType
{
public :
    UnsortedType();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void ResetList();
    void GetNextItem(ItemType&);
    void InsertItem(ItemType);
    void RetriveItem(ItemType&, bool&);
    void DeleteItem(ItemType);
    void PrintList();

private:
    int length;
    ItemType info[MAX_ITEM];
    int currentPos;

};

#endif // UNSORTEDTYPE_H
