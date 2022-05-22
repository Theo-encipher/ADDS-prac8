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
    int count = -1;

    while (! cin.eof()) {
        cin >> val;
        if (cin.eof()) {
            break;
        }
        count++;
        array[count] = val;

    }

    string info;
    cin >> info;

    if (info == "AF") {


    }

    int values[2];

    for (int i = 0; i < 2; i++) {

        cin >> values[i];
    }





    LinkedList * obj1 = new LinkedList(array, count);

    return 0;
}