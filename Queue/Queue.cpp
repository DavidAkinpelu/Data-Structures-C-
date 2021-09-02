#include <iostream>
#include <stdlib.h>
#include "Queue.h"

using namespace std;

template<typename T>
Queue<T>::Queue(){
    mHead = nullptr;
    mTail = nullptr;
    size = 0;
};

template<typename T>
Queue<T>::~Queue(){
    mHead = nullptr;
    mTail = nullptr;
};

template<typename T>
bool Queue<T>::isEmpty(){
    return mHead == NULL;

};

template<typename T>
int Queue<T>::getSize(){
    return size;
};

template<typename T>
void Queue<T>::enqueue(T data){
    // push a new element to the Queue
    NODE* temp = new NODE();
    temp->data = data;
    if (mTail == nullptr){
        mHead = temp;
        mTail = mHead;
    }
    else{
        mTail->next = temp;
        temp->prev = mTail;
        mTail = temp;
    };

    size += 1;
};

template<typename T>
T Queue<T>::dequeue(){
    if(isEmpty()){
        exit(EXIT_FAILURE);
    }
    else{
        T data = mHead->data;
        mHead = mHead->next;
        mHead->prev = nullptr;
        size -= 1;
        return data;

    };
};

template<typename T>
T Queue<T>::peek(){
    if (isEmpty()){
        exit(EXIT_FAILURE);
    }
    else{
        return mHead->data;
    };

};

template<typename T>
void Queue<T>::printQueue(){
    // print all the data in the Queue
    NODE* currentNode;
    currentNode = mHead;
    while(currentNode != NULL){
        std::cout<< currentNode->data << " ";
        currentNode = currentNode->next;
    };

};
