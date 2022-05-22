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
    string function;
    int parameters[2];
    int count = 0;

    for (int i = 0; i < 100; i++) {
        if (cin.fail()) {
            break;
        }
        cin >> array[i];
        count++;
    }

    cin.clear();
    cin >> function;
    for (int i = 0; i < 2; i++) {
        if (cin.fail()) {
            break;
        }

        cin >> parameters[i];

    }

    cin.clear();

    LinkedList * object = new LinkedList(array, count);

    if (function == "AF") {
        //addFront
        object->addFront(parameters[0]);
        object->printItems();
    }
    else if(function == "AE") {
        //addEnd
        object->addEnd(parameters[0]);
        object->printItems();
    } else if (function == "AP") {
        //addAtPosition
        object->addAtPosition(parameters[0], parameters[1]);
        object->printItems();
    } else if (function == "S") {
        //search
        object->search(parameters[0]);
        object->printItems();
    } else if (function == "DF") {
        //deleteFront
        object->deleteFront();
        object->printItems();
    } else if (function == "DE") {
        // deleteEnd
        object->deleteEnd();
        object->printItems();

    } else if (function == "DP") {
        //deletePosition
        object->deletePosition(parameters[0]);
        object->printItems();

    } else if (function == "GI") {
        //getItem
        object->getItem(parameters[0]);
        object->printItems();
    }


    return 0;
}