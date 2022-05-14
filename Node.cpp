//
// Created by Isabelle Colby on 14/5/2022.
//

//file purpose: implementation of the node class
//included libraries
//extern signatures: functions and headers

#include "Node.h"

Node::Node() {

}

int Node::getData() {
    return data;
}

void Node::setData(int data) {
    this->data = data;

}

int * Node::getNext() {
    return next;

}

void Node::setNext(int * pointer) {

    next = pointer;

}