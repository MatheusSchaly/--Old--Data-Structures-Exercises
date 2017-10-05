#include <iostream>

#include "Deque.h"

using namespace std;

// Remember to try reducing the Deque's capacity to 5 and extrapolate its
// limits to see if it reacts correctly

int main()
{
    Deque myDeque;
    int option, data;

    do {

        do {
            cout << "\nChoose an option:\n";
            cout << "1 - Insert an element at right.\n";
            cout << "2 - Insert an element at left.\n";
            cout << "3 - Remove an element from the right.\n";
            cout << "4 - Remove an element from the left.\n";
            cout << "5 - Check if the deque is empty.\n";
            cout << "6 - Check if the deque is full.\n";
            cout << "7 - Check an element existence.\n";
            cout << "8 - Get elements' quantity.\n";
            cout << "9 - Get leftmost element.\n";
            cout << "10 - Get leftmost element.\n";
            cout << "11 - Print deque.\n";
            cout << "0 - Exit program.\n";
            cin >> option;
        } while (option < 0 || option > 11);

        switch (option) {
        case 1:
            cout << "Enter the data: ";
            cin >> data;
            if (myDeque.isFull()) {
                cout << "Deque is full.";
            } else {
                myDeque.pushRight(data);
            }
            break;
        case 2:
            cout << "Enter the data: ";
            cin >> data;
            if (myDeque.isFull()) {
                cout << "Deque is full.";
            } else {
                myDeque.pushLeft(data);
            }
            break;
        case 3:
            if (myDeque.isEmpty()) {
                cout << "There are no elements to be deleted.\n";
            } else {
                myDeque.popRight();
            }
            break;
        case 4:
            if (myDeque.isEmpty()) {
                cout << "There are no elements to be deleted.\n";
            } else {
                myDeque.popLeft();
            }
            break;
        }
        case 5:

    } while (option != 0);
}

//Deque myDeque;
//myDeque.pushRight(10);
//myDeque.pushRight(20);
//myDeque.pushLeft(5);
//myDeque.pushLeft(0);
//myDeque.print(); // 0 5 10 20
//cout << endl << myDeque.getLeft(); // 0
//cout << endl << myDeque.getRight(); // 20
//cout << endl << myDeque.getElementsQuantity(); // 4
//cout << endl << myDeque.isEmpty(); // 0
//cout << endl << myDeque.isFull(); // 0
//cout << endl << myDeque.elementExistence(20); // 1
//cout << endl << myDeque.elementExistence(30); // 0
//cout << endl;
//myDeque.print(); // 0 5 10 20
//cout << endl;
//myDeque.popLeft(); // 5 10 20
//myDeque.popRight(); // 5 10
//myDeque.print(); // 5 10
//cout << endl;
//myDeque.popLeft(); // 10
//myDeque.print(); // 10
//cout << endl;
//myDeque.popRight(); //
//myDeque.print();
