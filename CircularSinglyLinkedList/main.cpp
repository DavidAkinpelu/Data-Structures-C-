#include <iostream>
#include <stdlib.h>
#include "CircularlySinglyLinkedList.h"
#include "CircularlySinglyLinkedList.cpp"

int main()
{
    CircularlySinglyLinkedList<int> myCircularlySinglyLinkedList;
    myCircularlySinglyLinkedList.insertFirst(10);
    myCircularlySinglyLinkedList.insertFirst(33);
    myCircularlySinglyLinkedList.insertLast(47);
    myCircularlySinglyLinkedList.insertLast(2);
    myCircularlySinglyLinkedList.insertAfter(82, 33);
    myCircularlySinglyLinkedList.printCircularlySinglyLinkedList();
    std::cout<<myCircularlySinglyLinkedList.deleteAt(10)<<std::endl;
    std::cout<<myCircularlySinglyLinkedList.deleteFirst()<<std::endl;
    std::cout<<myCircularlySinglyLinkedList.deleteLast()<<std::endl;
    std::cout<<myCircularlySinglyLinkedList.search(100)<<std::endl;
    std::cout<<myCircularlySinglyLinkedList.search(82)<<std::endl;
    myCircularlySinglyLinkedList.printCircularlySinglyLinkedList();
    std::cout << myCircularlySinglyLinkedList.getSize() <<std::endl;
    return 0;
}