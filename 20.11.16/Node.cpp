using namespace std;

class Node
{
    int data;
    Node *next;

public:

    Node(int aData,Node *aNext)
    {
        data =aData;
        next = aNext;
    }

    int getData()
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

