//
// Created by Isabelle Colby on 14/5/2022.
//
//file purpose

//included libraries
#include <iostream>

//extern signatures
#include "LinkedList.h"

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::LinkedList(int * array, int size) {
    //make the head a node
    head = new Node();

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
    //created new node to add
    Node * obj = new Node;

    //assigned new node obj with the new data
    obj->setData(newItem);

    //pointer to current first Node
    Node * temp = head->getNext();

    //set head to point to new first Node //inserting new node
    head->setNext(obj);

    //set new first Node to point to old first Node
    obj->setNext(temp);

}

void LinkedList::addEnd(int newItem) {

}

void LinkedList::addAtPosition(int position, int newItem) {
    addFront(newItem);
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

    //pointer for moving though nodes
    Node * iterator;

    //for loop to iterator through using the pointer //Note can't start at head because that doesn't hold any values;
    for (iterator = head->getNext(); iterator != nullptr; iterator = iterator->getNext() ) {
        std::cout << iterator->getData() << " ";
    }

    std::cout << std::endl;

}

LinkedList::~LinkedList() {

}