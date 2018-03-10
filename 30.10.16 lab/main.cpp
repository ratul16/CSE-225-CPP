#include <iostream>
#include <string>
#include "LinkedList.cpp"

using namespace std;

int main()
{
    LinkedList list1;

    list1.appendNode("AAA");
    list1.appendNode("BBB");
    list1.appendNode("CCC");
    list1.view();

    list1.deleteNode("AAA");
    list1.view();


}

