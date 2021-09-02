#ifndef QUEUE_H
#define QUEUE_H

template<typename T>

class Queue
{

    public:
      Queue();
      ~Queue();
      bool isEmpty();
      int getSize();
      void enqueue (T data);
      T dequeue();
      T peek();
      void printQueue();

    private:
      struct node{
	    T data;
	    node* next;
      node* prev;
      };
      typedef node NODE;
      NODE* mHead;
      NODE* mTail;
      int size;
};

#endif
