#include "ItemType.h"
#include "UnsortedType.h"
#include<iostream>

using namespace std;

int main()
{

ItemType t1;
ItemType t2;
ItemType t3;
ItemType t4;
ItemType t5;

t1.Initialize(1);
t2.Initialize(2);
t3.Initialize(3);
t4.Initialize(4);
t5.Initialize(5);

UnsortedType list;
list.InsertItem(t1);
list.InsertItem(t2);
list.InsertItem(t3);
list.InsertItem(t4);
list.InsertItem(t5);



list.PrintList();
cout<<"\n\nlength "<< list.LengthIs()<<endl;
cout<<"\nIs full or not:" << list.IsFull()<<endl;

bool b = false;

list.RetriveItem(t1,b);
cout <<"\n"<<b<<endl;

list.DeleteItem(t1);

list.PrintList();


}
