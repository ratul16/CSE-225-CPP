#include <iostream>
#include "ItemType.h"
#include "StackType.h"

using namespace std;

int Sum (StackType stack)
    {
        ItemType b;
        int sm = 0 ;
        for ( int i = 0 ; i <MAX_ITEMS ; i++){
             b = stack.Pop();
            if(b.getValue()%2 ==0){
                sm=sm +b.getValue();
            }
        }
        return sm;
    }


int main()
{
    ItemType itm;
    StackType sk;

    itm.Initialize(1);
    sk.Push(itm);

    itm.Initialize(2);
    sk.Push(itm);

    itm.Initialize(7);
    sk.Push(itm);

    itm.Initialize(8);
    sk.Push(itm);

    itm.Initialize(11);
    sk.Push(itm);
    sk.PrintStack();

    cout << endl << endl;

    sk.Pop();
    sk.PrintStack();

    cout << endl << endl;

    int stackprint = Sum(sk);
    cout << "The sum of the Stack is : " << stackprint ;



}
