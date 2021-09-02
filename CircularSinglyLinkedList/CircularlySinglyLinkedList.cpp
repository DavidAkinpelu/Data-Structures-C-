#include <iostream>
#include <stdlib.h>
#include "CircularlySinglyLinkedList.h"

using namespace std;

template<typename T>
CircularlySinglyLinkedList<T>::CircularlySinglyLinkedList(){
    mHead = nullptr;
    mTail = nullptr;
    size = 0;
};

template<typename T>
CircularlySinglyLinkedList<T>::~CircularlySinglyLinkedList(){
    mHead = nullptr;
    mTail = nullptr;
};

template<typename T>
bool CircularlySinglyLinkedList<T>::isEmpty(){
    return mHead == NULL;

};

template<typename T>
int CircularlySinglyLinkedList<T>::getSize(){
    return size;
};

template<typename T>
void CircularlySinglyLinkedList<T>::insertFirst(T data){
    // insert a new element at the beginning of the CircularlySinglyLinkedList
    NODE* temp = new NODE();
    temp->data = data;
    if (mHead == nullptr){
        mHead = temp;
        mTail = temp;
        mTail->next = mHead;
    }
    else{
        temp->next = mHead;
        mHead = temp;
        mTail->next = mHead;
    };

    size += 1;
};

template<typename T>
void CircularlySinglyLinkedList<T>::insertLast(T data){
    // insert a new element at the end of the CircularlySinglyLinkedList
    NODE* temp = new NODE();
    temp->data = data;
    if (mTail == nullptr){
        mHead = temp;
        mTail = mHead;
        mTail->next = mHead;
    }
    else{
        mTail->next= temp;
        mTail = temp;
        mTail->next = mHead;
    };

    size += 1;
};

template<typename T>
void CircularlySinglyLinkedList<T>::insertAfter(T data,  T prevdata){
    // insert a new element at the end of the CircularlySinglyLinkedList
    NODE* temp = new NODE();
    temp->data = data;
    if (mTail->data == prevdata){
        insertLast(data);
    }
    else{
        NODE* prevnode = mHead;
        while(prevnode->data != prevdata){
        prevnode = prevnode->next;
        };
        temp->next = prevnode->next;
        prevnode->next = temp;
        size += 1;
    };

};

template<typename T>
T CircularlySinglyLinkedList<T>::deleteFirst(){
    // Delete the node at the beginning of the CircularlySinglyLinkedList
    if (isEmpty()){
        exit(EXIT_FAILURE);
    }
    else if (mHead == mTail){
        T output = mHead->data;
        mTail = mHead = nullptr;
        size -= 1;
        return output;
    }
    else{
        T output = mHead->data;
        mHead =  mHead->next;
        mTail->next = mHead;
        size -= 1;
        return output;
    };

};

template<typename T>
T CircularlySinglyLinkedList<T>::deleteLast(){
    // Delete the last node of the CircularlySinglyLinkedList
    if (isEmpty()){
        exit(EXIT_FAILURE);
    }
    else if (mTail == mHead){
        T output = mTail->data;
        mTail = mHead = nullptr;
        size -= 1;
        return output;
    }
    else{
        NODE* temp = mHead;
        while(temp->next->data != mTail->data){
            temp = temp->next;
        };
        T output = temp->next->data;
        mTail = temp;
        mTail->next = mHead;
        size-=1;
        return output;
    };

};

template<typename T>
T CircularlySinglyLinkedList<T>::deleteAt(T data){
    // delete the Node with data
    if (isEmpty()){
        exit(EXIT_FAILURE);
    }
    else{
        if (mHead->data == data){
            T output = deleteFirst();
            return output;
        }
        else if (mTail->data == data){
            T output = deleteLast();
            return output;
        }
        else{
            NODE* temp = mHead;
            while(temp->next->data != data){
                temp = temp->next;
            };
            T output = temp->next->data;
            temp->next = temp->next->next;
            size-=1;
            return output;
        };

    };

};

template<typename T>
bool CircularlySinglyLinkedList<T>::search(T data){
    //Search for data in CircularlySingly linkedlist
    if (isEmpty()){
        exit(EXIT_FAILURE);
    }
    else{
        if (mHead->data == data){
            return true;
        }
        else if (mTail->data == data){
            return true;
        }
        else{
            NODE* temp = mHead->next;
            while (temp != mHead){
                if (temp->data == data){
                    return true;
                };
                temp = temp->next;
            };
            return false;
        };

    };

};

template<typename T>
void CircularlySinglyLinkedList<T>::printCircularlySinglyLinkedList(){
    // print all the data in the CircularlySinglyLinkedList
    std::cout<< mHead->data << " ";
    NODE* currentNode;
    currentNode = mHead->next;
    while(currentNode != mHead){
        std::cout<< currentNode->data << " ";
        currentNode = currentNode->next;
    };
    std::cout<<std::endl;
};
