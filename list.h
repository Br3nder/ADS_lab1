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
    ~Element();
    int getId() { return id; };
    string getName() { return name; };
private:

    int id;
    string name;
    Element* next;

};

class List
{
public:
    List() : firstElement(nullptr) {};
    List(Element* nextElement) : firstElement(nextElement) {};
    ~List();
    Element* getElement() { return firstElement; };
    friend ostream& operator << (ostream& stream, const List* list);
    void setElement(Element* newMan) { this->firstElement = newMan; };
    void pushBack(int idOfMan, string nameOfMan);
    void pushFront(int idOfMan, string nameOfMan);
    void popBack();
    void popFront();
    void insert(int idOfMan, string nameOfMan, int position);
    void insert(List* list, int position);
    Element* at(int position);
    void remove(int position);
    int getSize();
    void clear();
    void set(int idOfMan, string nameOfMan, int position);
    bool isEmpty();
private:
    Element* firstElement;
};