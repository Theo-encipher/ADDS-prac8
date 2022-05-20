//
// Created by Isabelle Colby on 14/5/2022.
//
//file purpose

//included libraries
#include <iostream>
#include <limits>

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
    int count1 = 1;

    while (pointer != nullptr) {
        pointer = pointer->getNext();
        count1++;
    }

    pointer = head->getNext();
    int count2 = 1 ;

    while (count2 != (count1-1)) {
        pointer = pointer->getNext();
        count2++;
    }

    Node * pointertoEnd = pointer;

    //create new node to add
    Node * obj = new Node();

    //make old end node point to new end node
    pointertoEnd->setNext(obj);

    //set new data to new node
    obj->setData(newItem);
    obj->setNext(nullptr);

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

    //pointer to more through linked list
    Node * iter;
    int count = 0;

    for (iter = head->getNext(); iter != nullptr; iter = iter->getNext() ) {
        count++;
        if (iter->getData() == item) {
            std::cout << count << " " << std::endl;
            return count;
        }
    }


}

int LinkedList::getItem(int position) {
    //pointer to more through linked list
    Node * iter;
    int count = 0;
    int data = 0;

    for (iter = head->getNext(); iter != nullptr; iter = iter->getNext() ) {
        count++;
        if (count == position) {
            data = iter->getData();
            std::cout << data << " " << std::endl;
            return data;
        }
    }

    std::cout << std::numeric_limits < int >::max() << " " << std::endl;

    return std::numeric_limits< int >::max();

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
    //pointer to move through list
    Node * pointer = head->getNext();
    Node * discard;
    Node * before;
    int count1 = 0;
    int count2 = 0;

    //find the last node
    while (pointer != nullptr) {
        pointer = pointer->getNext();
        count1++;
    }
    pointer = head->getNext();

    //find second to last node
    while (count2 != (count1-1)) {
       pointer = pointer->getNext();
       count2++;
    }
    discard = pointer;

    pointer = head->getNext();
    count2 = 0;
    while (count2 != (count1-2)) {
        pointer = pointer->getNext();
        count2++;
    }

    before = pointer;

    //make second to Last point to null
    before->setNext(nullptr);

    delete discard;
}

void LinkedList::deletePosition(int position) {

    Node * pointer = head->getNext();
    Node * discard;
    Node * before;
    int count1 = 1;

    //if the position is less than one return outside of range
    if ( position < 1) {
        std::cout << "outside range" << std::endl;
    }
    else {
        //find the length of the list
        while (pointer != nullptr) {
            pointer = pointer->getNext();
            count1++;
        }

        //if the position is greater than the size of the list
        if (position > count1) {
            std::cout << "outside range" << std::endl;
        }
        else {
            pointer = head->getNext();
            int count2 = 1 ;

            while (count2 != (position -2)) {
                count2++;
                pointer = pointer->getNext();
            }

            before = pointer;
            pointer = head->getNext();
            count2 = 1 ;

            while (count2 != (position -1)) {
                count2++;
                pointer = pointer->getNext();
            }
            discard = pointer;

            Node * temp = discard;
            before->setNext(temp);

            delete discard;
        }

    }

}


void LinkedList::printItems() {

    //pointer for moving though nodes
    Node * iterator;
    int count  = 1;
    //for loop to iterator through using the pointer //Note can't start at head because that doesn't hold any values
    for (iterator = head->getNext(); iterator != nullptr; iterator = iterator->getNext() ) {
        std::cout << count << ": " << iterator->getData() << " ";
        count++;
    }

    std::cout << std::endl;

}

LinkedList::~LinkedList() {

//    Node * iter;
//    for (iter->getNext(); iter != nullptr; iter = iter->getNext()) {
//    };


}