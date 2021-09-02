#include <iostream>
#include <stdlib.h>
#include "SinglyLinkedList.h"
#include "SinglyLinkedList.cpp"

int main()
{
    SinglyLinkedList<int> mySinglyLinkedList;
    mySinglyLinkedList.insertFirst(10);
    mySinglyLinkedList.insertFirst(33);
    mySinglyLinkedList.insertLast(47);
    mySinglyLinkedList.insertLast(2);
    mySinglyLinkedList.insertAfter(82, 33);
    mySinglyLinkedList.printSinglyLinkedList();
    std::cout<<mySinglyLinkedList.deleteAt(10)<<std::endl;
    std::cout<<mySinglyLinkedList.deleteFirst()<<std::endl;
    std::cout<<mySinglyLinkedList.deleteLast()<<std::endl;
    std::cout<<mySinglyLinkedList.search(100)<<std::endl;
    mySinglyLinkedList.printSinglyLinkedList();
    std::cout << mySinglyLinkedList.getSize() <<std::endl;
    return 0;
}