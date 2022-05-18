//
// Created by Isabelle Colby on 14/5/2022.
//
//file purpose

//included libraries

//extern signatures
#include "LinkedList.h"

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::LinkedList(int * array, int size) {
    this->size = size;

    //store the array values in the variable in the object
    for (int i = 0; i < size; i++) {
        this->array[i] = array[i];
    }

    //dyamically create a new node
    Node * obj1 = new Node();

    //make head point to the new Node
    head->setNext(obj1);

    int i = 0;

    //set the data and pointer for each node in the correct order; excluding final pointer
    while (i != (size-1)) {
        obj1->setData(array[i]);
        Node * obj2 = new Node();
        obj1->setNext(obj2);
        obj1 = obj2;
        i++;
    }

    //set the data in the final node
    obj1->setData(array[i]);

    //set the pointer in the final node to a null pointer
    obj1->setNext(nullptr);
}

void LinkedList::addFront(int newItem) {



}

void LinkedList::addEnd(int newItem) {

}

void LinkedList::addAtPosition(int position, int newItem) {

}

int LinkedList::search(int item) {

}

void LinkedList::deleteFront() {

}

void LinkedList::deleteEnd() {

}

void LinkedList::deletePosition(int position) {

}


void LinkedList::printItems() {

}

LinkedList::~LinkedList() {

}