#include <string>

using namespace std;
class Node
{
    string data;
    Node *next;

public:

    Node(string  aData,Node *aNext)
    {
        data = aData;
        next = aNext;
    }

    string getData()
    {
        return data;
    }

    Node *getNext()
    {
        return next;
    }

    void setNext(Node *aNext)
    {
        next = aNext;
    }




};
