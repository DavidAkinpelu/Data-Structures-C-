#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

template<typename T>

class DoublyLinkedList
{
    public:
      DoublyLinkedList();
      ~DoublyLinkedList();
      bool isEmpty();
      int getSize();
      void insertFirst(T data);
      void insertLast(T data);
      void insertAfter(T data, T prevdata);
      T deleteFirst();
      T deleteLast();
      T deleteAt(T data);
      bool search(T data);
      void printDoublyLinkedList();

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
