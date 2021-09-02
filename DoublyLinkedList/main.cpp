#include <iostream>
#include <stdlib.h>
#include "DoublyLinkedList.h"
#include "DoublyLinkedList.cpp"

int main()
{
    DoublyLinkedList<int> myDoublyLinkedList;
    myDoublyLinkedList.insertFirst(10);
    myDoublyLinkedList.insertFirst(33);
    myDoublyLinkedList.insertLast(47);
    myDoublyLinkedList.insertLast(2);
    myDoublyLinkedList.insertAfter(82, 33);
    myDoublyLinkedList.printDoublyLinkedList();
    std::cout<<myDoublyLinkedList.deleteAt(10)<<std::endl;
    std::cout<<myDoublyLinkedList.deleteFirst()<<std::endl;
    std::cout<<myDoublyLinkedList.deleteLast()<<std::endl;
    std::cout<<myDoublyLinkedList.search(100)<<std::endl;
    myDoublyLinkedList.printDoublyLinkedList();
    std::cout << myDoublyLinkedList.getSize() <<std::endl;
    return 0;
}