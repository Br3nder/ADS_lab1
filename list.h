#pragma once
#include <iostream>
#include <string>

using namespace std;

class Element
{
public:
    Element(int idOfMan = 0, string nameOfMan = "None", Element* nextMan = nullptr) : id(idOfMan), name(nameOfMan), next(nextMan) {};
    Element* getNext() { return next; }
    void setNext(Element* next) { this->next = next; };
    friend ostream& operator << (ostream& stream, const Element* element);
    ~Element();

private:

    int id;
    string name;
    Element* next;

};

class List
{
public:
    List() : next(NULL) {};
    List(Element* nextElement) : next(nextElement) {};
    ~List() { delete this; };
    Element* getElement() { return next; };
    friend ostream& operator << (ostream& stream, const Element* element);
    void setElement(Element* newMan) { this->next = newMan; };
    void pushBack(Element* newMan);
    void pushFront(Element* newMan);
    void popBack();
    void popFront();
    void insert(Element* newMan, int position);
    void insert(List* list, int position);
    Element* at(int position);
    void remove(int position);
    int getSize();
    void clear();
    void set(Element* newMan, int position);
    bool isEmpty();
private:
    Element* next;
};

void showAllList(Element* e1);
