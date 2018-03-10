#include "Node.cpp"
#include <iostream>

using namespace std ;
const int MAX_ITEMS = 5;


class Queue
{
    Node *front;
    Node *back;

public:

    int length;
    Queue()
    {
        front = NULL;
        back = NULL;
        length=0;

    }

    bool isEmpty()
    {
        return front==NULL;
    }

    bool isFull()
    {
        return length==MAX_ITEMS;
    }

    void enqueue(int data)
    {
        if(isFull()==true){
            cout << " Queue is Full "<<endl;
        }
        else{
            Node *newNode = new Node(data,NULL);

            if(front==NULL){
                front=newNode;
            }
            else{
                back->setNext(newNode);
            }
            back=newNode;
            length++;
        }
    }

    void dequeue()
    {
        if(isEmpty()==true){
           cout << " Queue is Empty "<<endl;
        }
        else{
            Node *tmp;
            tmp=front;
            front=front->getNext();
            cout<< " The data dequeue is "<<tmp->getData()<<endl;
            delete tmp;

        }

    }


    void view()
    {
        Node *tmp;
        tmp =front;
        if(front==NULL){
            cout<<"Nothing to Display"<<endl;
        }
        else{
            while(tmp!=NULL){
                cout<<" "<<tmp->getData();
                tmp=tmp->getNext();
            }
            cout<<endl;
        }

    }

};
