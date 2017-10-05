#include <iostream>

#include "Deque.h"

using namespace std;

// Remember to try reducing the Deque's capacity to 5 and extrapolate its
// limits to see if it reacts correctly (it has been already tested and is working perfectly)

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
            cout << "9 - Get rightmost element.\n";
            cout << "10 - Get leftmost element.\n";
            cout << "11 - Print deque.\n";
            cout << "0 - Exit program.\n";
            cin >> option;
        } while (option < 0 || option > 11);

        cout << endl;

        switch (option) {
        case 1:
            if (myDeque.isFull()) {
                cout << "Deque is full.\n";
            } else {
                cout << "Enter the data: ";
                cin >> data;
                myDeque.pushRight(data);
            }
            break;
        case 2:
            if (myDeque.isFull()) {
                cout << "Deque is full.\n";
            } else {
                cout << "Enter the data: ";
                cin >> data;
                myDeque.pushLeft(data);
            }
            break;
        case 3:
            if (myDeque.isEmpty()) {
                cout << "There are no elements to be removed.\n";
            } else {
                myDeque.popRight();
            }
            break;
        case 4:
            if (myDeque.isEmpty()) {
                cout << "There are no elements to be removed.\n";
            } else {
                myDeque.popLeft();
            }
            break;
        case 5:
            if (myDeque.isEmpty()) {
                cout << "Deque is empty.\n";
            } else {
                cout << "Deque is not empty.\n";
            }
            break;
        case 6:
            if (myDeque.isFull()) {
                cout << "Deque is full.\n";
            } else {
                cout << "Deque is not full.\n";
            }
            break;
        case 7:
            cout << "Enter the data: ";
            cin >> data;
            if (myDeque.elementExistence(data)) {
                cout << "The element exists.\n";
            } else {
                cout << "The element does not exist.\n";
            }
            break;
        case 8:
            cout << "Elements quantity: " << myDeque.getElementsQuantity() << endl;
            break;
        case 9:
            cout << "Rightmost element: " << myDeque.getRight() << endl;
            break;
        case 10:
            cout << "Leftmost element: " << myDeque.getLeft() << endl;
            break;
        case 11:
            myDeque.print();
            break;
        }

    } while (option != 0);

}
