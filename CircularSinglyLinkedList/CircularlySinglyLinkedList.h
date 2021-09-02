#ifndef CircularlySinglyLINKEDLIST_H
#define CircularlySinglyLINKEDLIST_H

template<typename T>

class CircularlySinglyLinkedList
{
    public:
      CircularlySinglyLinkedList();
      ~CircularlySinglyLinkedList();
      bool isEmpty();
      int getSize();
      void insertFirst(T data);
      void insertLast(T data);
      void insertAfter(T data, T prevdata);
      T deleteFirst();
      T deleteLast();
      T deleteAt(T data);
      bool search(T data);
      void printCircularlySinglyLinkedList();

    private:
      struct node{
	    T data;
	    node* next;
      };
      typedef node NODE;
      NODE* mHead;
      NODE* mTail;
      int size;
};

#endif
