#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    List* listFirst = new List(new Element(1, "Vadim"));
    listFirst->pushBack(new Element(2, "Nikita"));
    listFirst->pushBack(new Element(3, "Alexandra"));
    listFirst->clear();
    
    showAllList(listFirst->getElement());

    //cout << "SIZE IS: " << listFirst->getSize();
    cout << "\nEMPTY: " << listFirst->isEmpty();

    return 0;
}