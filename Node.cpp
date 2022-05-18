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

Node * Node::getNext() {
    return next;

}

void Node::setNext(Node * pointer) {

    next = pointer;

}