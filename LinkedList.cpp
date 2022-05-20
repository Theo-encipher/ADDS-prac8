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

    //dynamically create a new node
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
    //pointer to move through list

    Node * pointer = head->getNext();

    //move through until final node is reached
    while (pointer != nullptr) {
        pointer = pointer->getNext();
    }

    //create new node to add
    Node * obj = new Node();
    //set new data to new node
    obj->setData(newItem);

    //make old end node point to new end node
    pointer->setNext(obj);

}

void LinkedList::addAtPosition(int position, int newItem) {
    //variable to find position
    int count = 1;

    //pointer to move through list
    Node* pointer = head->getNext();

    //position less than one add at the start of the linkedList
    if ( position < 1) {
        addFront(newItem);
    }

    else {
        //find the node before the position the new node is being added at or find position is bigger than size of array, hence add at end;
        for (pointer; pointer != nullptr; pointer = pointer->getNext()) {
            count++;
            if (count == (position - 1)) {
                break;
            }
        }

        if (pointer == nullptr) {
            addEnd(newItem);
        }

        else {
            //store pointer before position that new node is added at
            Node *temp = pointer->getNext();

            //create new node
            Node *obj = new Node;

            //set new data
            obj->setData(newItem);

            //make object to node after it
            obj->setNext(temp);

            //make node before point to new node
            pointer->setNext(obj);
        }
    }
}

int LinkedList::search(int item) {

}

void LinkedList::deleteFront() {
    //get pointer to discard
    Node * discard = head->getNext();
    //get pointer to node that disccard is pointing to
    Node * link = discard->getNext();
    //make head pointer to link
    head->setNext(link);

    //delete discard
    delete discard;


}

void LinkedList::deleteEnd() {

}

void LinkedList::deletePosition(int position) {

}


void LinkedList::printItems() {

    //pointer for moving though nodes
    Node * iterator;

    //for loop to iterator through using the pointer //Note can't start at head because that doesn't hold any values
    for (iterator = head->getNext(); iterator != nullptr; iterator = iterator->getNext() ) {
        std::cout << iterator->getData() << " ";
    }

    std::cout << std::endl;

}

LinkedList::~LinkedList() {

}