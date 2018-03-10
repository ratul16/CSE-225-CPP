#include <string>
#include "Node.cpp"
#include <iostream>

using namespace std;

class LinkedList
{
    Node *head;

public:

    LinkedList()
    {
        head =NULL;
    }

    void appendNode(string data)
    {
        Node *newNode = new Node(data,NULL);
        Node *tmp = head;

        if(tmp !=NULL)
        {
            while(tmp->getNext()!=NULL)
            {
                tmp = tmp->getNext();
            }

            tmp->setNext(newNode);
        }
        else
        {
            head =newNode;
        }
    }


    void deleteNode (string data)
    {
        Node *tmp=head;

        if( tmp==NULL)
        {
            return;
        }

        else if (tmp->getNext()==NULL && tmp->getData()== data)
        {
            delete tmp;
            head = NULL;
        }

        else if(tmp->getNext()!=NULL && tmp->getData()== data){
            head = head ->getNext();
            delete tmp;
        }

        else
        {
            Node *previousNode;

            do{
                if (tmp->getData()==data)
                {
                    break;
                }

                previousNode = tmp;
                tmp =tmp->getNext();
            }while(tmp!=NULL);

            previousNode->setNext(tmp->getNext());
            delete tmp;
        }
    }

    void view()
    {
        Node *tmp =head;

        if(tmp== NULL){
            cout << "Empty List"<<endl;
            return;
        }
        else if(tmp->getNext() == NULL){
            cout <<tmp->getData();
            cout<<"-->";
            cout<< "NULL"<<endl;
        }
        else{
            do{
                cout << tmp->getData();
                cout<<"-->";
                tmp =tmp->getNext();
            }while(tmp !=NULL);

            cout <<"NULL" <<endl;
        }


    }

};
