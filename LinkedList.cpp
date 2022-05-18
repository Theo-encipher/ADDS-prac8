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

    //dynamically create an array that holds an array of pointers to Nodes
    this->list = new Node[size];
    //assign the head pointer to be the first node in the list
    list[0] = *head;

    //set the data and pointer for each node in the correct order
    for (int i = 0; i < size; i++) {
        list[i].setData(array[i]);
        if (i < (size -1)) {
            //set the pointer to the next node until the final one
            list[i].setNext(&list[i+1]);
        }
        else {
            list[i].setNext(nullptr);
        }

    }
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
    for (int i = 0; i < size; i++) {
        delete &list[i];
    }
}