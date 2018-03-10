#ifndef ITEMTYPE_H
#define ITEMTYPE_H


#include<iostream>
using namespace std;

enum RelationType {LESS,GREATER,EQUAL};

class ItemType
{
public:
    ItemType();
    RelationType CompareTo(ItemType);
    void Print();
    void Initialize(int number);

private:
    int value;
};

#endif // ITEMTYPE_H
