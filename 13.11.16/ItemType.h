#ifndef ITEMTYPE_H
#define ITEMTYPE_H
#include <iostream>

const int MAX_ITEMS = 5 ;

using namespace std;
class ItemType
{
public :
    ItemType();
    void Print();
    void Initialize(int number);
    int getValue();

private:
    int value;

};

#endif // ITEMTYPE_H
