#include <iostream>
#include <stdlib.h>
#include "SinglyLinkedList.h"

using namespace std;

template<typename T>
SinglyLinkedList<T>::SinglyLinkedList(){
    mHead = nullptr;
    size = 0;
};

template<typename T>
SinglyLinkedList<T>::~SinglyLinkedList(){
};

template<typename T>
bool SinglyLinkedList<T>::isEmpty(){
    return mHead == NULL;

};

template<typename T>
int SinglyLinkedList<T>::getSize(){
    return size;
};

template<typename T>
void SinglyLinkedList<T>::insertFirst(T data){
    // insert a new element at the beginning of the SinglyLinkedList
    NODE* temp = new NODE();
    temp->data = data;
    temp->next = mHead;
    mHead = temp;
    size += 1;
};

template<typename T>
void SinglyLinkedList<T>::insertLast(T data){
    // insert a new element at the end of the SinglyLinkedList
    NODE* temp = new NODE();
    temp->data = data;
    NODE* curr = mHead;
    while (curr->next){
        curr = curr->next;
    };
    curr->next = temp;
    size += 1;
};

template<typename T>
void SinglyLinkedList<T>::insertAfter(T data,  T prevdata){
    // insert a new element at the end of the SinglyLinkedList
    NODE* temp = new NODE();
    temp->data = data;
    NODE* prevnode = mHead;
    while(prevnode->data != prevdata){
        prevnode = prevnode->next;
    }
    temp->next = prevnode->next;
    prevnode->next = temp;
    size += 1;
};

template<typename T>
T SinglyLinkedList<T>::deleteFirst(){
    // Delete the node at the beginning of the SinglyLinkedList
    if (isEmpty()){
        exit(EXIT_FAILURE);
    }
    else{
        T output = mHead->data;
        mHead =  mHead->next;
        size -= 1;
        return output;
    };
};


template<typename T>
T SinglyLinkedList<T>::deleteLast(){
    // Delete the last node of the SinglyLinkedList
    if (isEmpty()){
        exit(EXIT_FAILURE);
    }
    else {
        NODE* curr = mHead;
        while (curr->next->next != nullptr){
            curr = curr->next;
        };
        T output = curr->next->data;
        curr->next = nullptr;
        size -= 1;
        return output;
    };

};

template<typename T>
T SinglyLinkedList<T>::deleteAt(T data){
    // delete the Node with data
    if (isEmpty()){
        exit(EXIT_FAILURE);
    }
    else{
        if (mHead->data == data){
            T output = deleteFirst();
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
bool SinglyLinkedList<T>::search(T data){
    //Search for data in Singly linkedlist
    if (isEmpty()){
        exit(EXIT_FAILURE);
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

template<typename T>
void SinglyLinkedList<T>::printSinglyLinkedList(){
    // print all the data in the SinglyLinkedList
    NODE* currentNode;
    currentNode = mHead;
    while(currentNode != NULL){
        std::cout<< currentNode->data << " ";
        currentNode = currentNode->next;
    };
    std::cout<<std::endl;
};
