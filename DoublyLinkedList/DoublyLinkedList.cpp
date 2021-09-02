#include <iostream>
#include <stdlib.h>
#include "DoublyLinkedList.h"

using namespace std;

template<typename T>
DoublyLinkedList<T>::DoublyLinkedList(){
    mHead = nullptr;
    mTail = nullptr;
    size = 0;
};

template<typename T>
DoublyLinkedList<T>::~DoublyLinkedList(){
    mHead = nullptr;
    mTail = nullptr;
};

template<typename T>
bool DoublyLinkedList<T>::isEmpty(){
    return mHead == NULL;

};

template<typename T>
int DoublyLinkedList<T>::getSize(){
    return size;
};

template<typename T>
void DoublyLinkedList<T>::insertFirst(T data){
    // insert a new element at the beginning of the DoublyLinkedList
    NODE* temp = new NODE();
    temp->data = data;
    if (mHead == nullptr){
        mHead = temp;
        mTail = mHead;
    }
    else{
        temp->next = mHead;
        temp->next->prev = temp;
        mHead = temp;
    };

    size += 1;
};

template<typename T>
void DoublyLinkedList<T>::insertLast(T data){
    // insert a new element at the end of the DoublyLinkedList
    NODE* temp = new NODE();
    temp->data = data;
    if (mTail == nullptr){
        mHead = temp;
        mTail = mHead;
    }
    else{
        temp->prev = mTail;
        temp->prev->next = temp;
        mTail = temp;
    };

    size += 1;
};

template<typename T>
void DoublyLinkedList<T>::insertAfter(T data,  T prevdata){
    // insert a new element at the end of the DoublyLinkedList
    NODE* temp = new NODE();
    temp->data = data;
    NODE* prevnode = mHead;
    while(prevnode->data != prevdata){
        prevnode = prevnode->next;
    }
    temp->next = prevnode->next;
    temp->prev = prevnode;
    prevnode->next->prev = temp;
    prevnode->next = temp;
    size += 1;
};

template<typename T>
T DoublyLinkedList<T>::deleteFirst(){
    // Delete the node at the beginning of the doublyLinkedList
    if (isEmpty()){
        exit(EXIT_FAILURE);
    }
    else if (mHead == mTail){
        T output = mTail->data;
        mTail = mHead = nullptr;
        size -= 1;
        return output;
    }
    else{
        T output = mHead->data;
        mHead->next->prev = nullptr;
        mHead =  mHead->next;
        size -= 1;
        return output;
    };

};

template<typename T>
T DoublyLinkedList<T>::deleteLast(){
    // Delete the last node of the doublyLinkedList
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
        T output = mTail->data;
        mTail->prev->next = nullptr;
        mTail =  mTail->prev;
        size -= 1;
        return output;

    };

};

template<typename T>
T DoublyLinkedList<T>::deleteAt(T data){
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
            while(temp->data != data){
                temp = temp->next;
            };
            T output = temp->data;
            temp->prev->next = temp->next;
            size-=1;
            return output;
        };

    };

};

template<typename T>
bool DoublyLinkedList<T>::search(T data){
    //Search for data in doubly linkedlist
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
            NODE* temp = mHead;
            while (temp != nullptr){
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
void DoublyLinkedList<T>::printDoublyLinkedList(){
    // print all the data in the DoublyLinkedList
    NODE* currentNode;
    currentNode = mHead;
    while(currentNode != NULL){
        std::cout<< currentNode->data << " ";
        currentNode = currentNode->next;
    };
    std::cout<<std::endl;
};
