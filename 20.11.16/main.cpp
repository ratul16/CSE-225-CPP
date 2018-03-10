#include <iostream>
#include "Queue.cpp"

using namespace std;

int main()
{

    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(5);
    q.enqueue(8);
    q.enqueue(9);
    q.view();

    cout<<endl<<endl;

    q.enqueue(10);
    q.view();

    cout<<endl<<endl;

    for(int i=0;i<=5;i++){
        q.dequeue();
    }



}
