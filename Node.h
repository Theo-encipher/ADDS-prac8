//
// Created by Isabelle Colby on 14/5/2022.
//

#ifndef NODE_H
#define NODE_H

//file purpose:  item of the list, together with the address of the next item, is placed in one object of
//type Node (find the description below).The last node of the list should include the last item and a null
//pointer (NULL or nullptr).

//included libraries
//extern signatures: headers and functions

class Node {

private:
    int data;
    int * next; //pointer to next node

public:
    Node();
    int getData();
    void setData(int data);
    int * getNext();
    void setNext(int * next);
    ~Node();

};


#endif //NODE_H
