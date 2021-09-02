#include <iostream>
#include <stdlib.h>
#include "Stack.h"

using namespace std;

template<typename T>
Stack<T>::Stack(){
    mHead = nullptr;
    size = 0;
};

template<typename T>
Stack<T>::~Stack(){
    mHead = nullptr;
};

template<typename T>
bool Stack<T>::isEmpty(){
    return mHead == NULL;

};

template<typename T>
int Stack<T>::getSize(){
    return size;
};

template<typename T>
void Stack<T>::push(T data){
    // push a new element to the stack
    NODE* temp = new NODE();
    temp->data = data;
    temp->next = mHead;
    mHead = temp;
    size += 1;
};

template<typename T>
T Stack<T>::pop(){
    if(isEmpty()){
        exit(EXIT_FAILURE);
    }
    else{
        NODE* temp = mHead;
        mHead = mHead->next;
        size -= 1;
        T data = temp->data;
        delete temp;
        return data;

    };
};

template<typename T>
T Stack<T>::peek(){
    if (isEmpty()){
        exit(EXIT_FAILURE);
    }
    else{
        return mHead->data;
    };

};

template<typename T>
void Stack<T>::printStack(){
    // print all the data in the stack
    NODE* currentNode;
    currentNode = mHead;
    while(currentNode != NULL){
        std::cout<< currentNode->data << " ";
        currentNode = currentNode->next;
    };

};
