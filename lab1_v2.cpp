#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    List* listFirst = new List();
    listFirst->pushBack(3, "Alexandra");
    listFirst->popBack();
    cout << listFirst << endl;
    cout << "SIZE IS: " << listFirst->getSize() << endl;
    cout << "EMPTY: " << listFirst->isEmpty();

    return 0;
}