#include <iostream>
#include "SortedList.h"
#include "ItemType.h"

using namespace std;

int main()
{
    ItemType t1;
    SortedType ut;

    t1.Initialize(1);
    ut.InsertItem(t1);

    t1.Initialize(7);
    ut.InsertItem(t1);

    t1.Initialize(2);
    ut.InsertItem(t1);

    t1.Initialize(5);
    ut.InsertItem(t1);

    ut.PrintList();
    cout<<endl;
    bool b=false;

    ut.RetrieveItem(t1,b);
    cout<<b<<endl;

    ut.DeleteItem(t1);
    ut.PrintList();
}
