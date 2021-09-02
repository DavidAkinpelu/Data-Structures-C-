#include <iostream>
#include <stdlib.h>
#include "Queue.h"
#include "Queue.cpp"

int main()
{
    Queue<int> myQueue;
    myQueue.enqueue(14);
    myQueue.enqueue(50);
    myQueue.enqueue(2);
    std::cout << myQueue.peek() << std::endl;
    myQueue.dequeue();
    myQueue.enqueue(88);
    std::cout << myQueue.getSize() <<std::endl;
    myQueue.printQueue();
    return 0;
}