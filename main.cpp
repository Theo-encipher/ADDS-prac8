//
// Created by Isabelle Colby on 14/5/2022.
//
//file purpose

//included libraries
#include <iostream>
using namespace std;

//extern signatures:
#include "LinkedList.h"
#include "Node.h"

int main() {

    int array[100];
    int val;
    int count = -1;

    while (! cin.eof()) {
        cin >> val;
        if (cin.eof()) {
            break;
        }
        count++;
        array[count] = val;

    }



    LinkedList * obj1 = new LinkedList(array, count);

    return 0;
}