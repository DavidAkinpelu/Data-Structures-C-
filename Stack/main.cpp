#include <iostream>
#include <stdlib.h>
#include "Stack.h"
#include "Stack.cpp"


int main()
{

    Stack<int> myStack;
    myStack.push(14);
    myStack.push(50);
    myStack.push(2);
    std::cout << myStack.peek() << std::endl;
    myStack.pop();
    myStack.push(88);
    std::cout << myStack.getSize() <<std::endl;
    myStack.printStack();
    return 0;

}