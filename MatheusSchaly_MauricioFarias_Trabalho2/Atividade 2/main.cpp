#include <iostream>

#include "PriorityQueue.h"

using namespace std;

int main()
{
    PriorityQueue pq;
    // (DATA, PRIORITY)
    pq.insertElement(1, 10);
    pq.print(); // 1 (10)
    pq.insertElement(2, 20);
    pq.print(); // 1 (10) 2 (20)
    pq.insertElement(0, 30);
    pq.print(); // 1 (10) 2 (20) 0 (30)
    pq.removeElement();
    pq.print(); // 1 (10) 2 (20)
    pq.insertElement(3, 20);
    pq.print(); // 1 (10) 2 (20) 3 (20)
    pq.insertElement(4, 10);
    pq.print(); // 1 (10) 2 (20) 3 (20) 4 (10)
    pq.removeElement();
    pq.print(); // 1 (10) 3 (20) 4 (10)
    pq.removeElement();
    pq.print(); // 1 (10) 4 (10)
    pq.removeElement();
    pq.print(); // 4 (10)
    pq.removeElement();
    pq.print(); //
}
