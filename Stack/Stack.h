#ifndef STACK_H
#define STACK_H

template<typename T>

class Stack
{

    public:
      Stack();
      ~Stack();
      bool isEmpty();
      int getSize();
      void push (T data);
      T pop();
      T peek();
      void printStack();

    private:
      struct node{
	    T data;
	    node* next;
      };
      typedef node NODE;
      NODE* mHead;
      int size;
};

#endif
