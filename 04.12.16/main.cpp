#include <iostream>
#include "HeapType.cpp"
#include "PQueue.cpp"

using namespace std;

int main()
{


    PQueue<int> a(10);
    a.PrintQueue();

    cout<<endl;

    a.Enqueue(4);
    a.Enqueue(9);
    a.Enqueue(2);
    a.Enqueue(7);
    a.Enqueue(3);
    a.Enqueue(11);
    a.Enqueue(17);
    a.Enqueue(0);
    a.Enqueue(5);
    a.Enqueue(1);
    a.PrintQueue();

    cout<<endl;
    if(a.IsEmpty()==true){
        cout<<"Its Empty"<<endl;
    }
    else cout<<"Not Empty"<<endl;

    cout<<endl;

    int b;
    a.Dequeue(b);
    a.PrintQueue();





    a.IsEmpty();







}
