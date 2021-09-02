#ifndef SinglyLINKEDLIST_H
#define SinglyLINKEDLIST_H

template<typename T>

class SinglyLinkedList
{
    public:
      SinglyLinkedList();
      ~SinglyLinkedList();
      bool isEmpty();
      int getSize();
      void insertFirst(T data);
      void insertLast(T data);
      void insertAfter(T data, T prevdata);
      T deleteFirst();
      T deleteLast();
      T deleteAt(T data);
      bool search(T data);
      void printSinglyLinkedList();

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
