//
// Created by Isabelle Colby on 14/5/2022.
//
//file purpose

//included libraries
#include <iostream>
using namespace std;
#include <string>

//extern signatures:
#include "LinkedList.h"
#include "Node.h"

int main() {

    int array[100];
    int val;
    int count = 0;

    while (count != 100) {
        cin >> val;
        if (cin.eof()) {
            break;
        }
        array[count] = val;
        count++;


    }

    string info;
    cin >> info;

    int values[2];
    int data;
    int counter = 0;

    while (! cin.eof()) {
        cin >> data;
        if (cin.eof()) {
            break;
        }
        values[counter] = data;
        counter++;
    }

    LinkedList * object = new LinkedList(array, 100);

    if (info == "AF") {
        //addFront
        object->addFront(values[0]);
        object->printItems();
    }
    else if(info == "AE") {
        //addEnd
        object->addEnd(values[0]);
        object->printItems();
    } else if (info == "AP") {
        //addAtPosition
        object->addAtPosition(values[0], values[1]);
        object->printItems();
    } else if (info == "S") {
        //search
        object->search(values[0]);
        object->printItems();
    } else if (info == "DF") {
        //deleteFront
        object->deleteFront();
        object->printItems();
    } else if (info == "DE") {
        // deleteEnd
        object->deleteEnd();
        object->printItems();

    } else if (info == "DP") {
        //deletePosition
        object->deletePosition(values[0]);
        object->printItems();

    } else if (info == "GI") {
        //getItem
        object->getItem(values[0]);
        object->printItems();
    }








    LinkedList * obj1 = new LinkedList(array, count);

    return 0;
}