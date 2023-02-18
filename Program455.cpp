#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////
// Structure for Singly Linear and Singly Circular
template <class T>
struct nodeS
{
    T data;
    struct nodeS *next;
};

////////////////////////////////////////////////////////////////
// Structure for Doubly Linear and doubly Circular
template <class T>
struct nodeD
{
    T data;
    struct nodeD *next;
    struct nodeD *prev;
};

////////////////////////////////////////////////////////////////

// Class of Singly Linear Linked List
template <class T>
class SinglyLL
{
    public:
        struct nodeS<T> * First;

        SinglyLL();

        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();
};

////////////////////////////////////////////////////////////////

// Class of Singly Circular Linked List
template <class T>
class SinglyCL
{
    public:
        struct nodeS<T> * First;

        SinglyCL();

        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();
};

////////////////////////////////////////////////////////////////

// Class of Doubly Linear Linked List

template <class T>
class DoublyLL
{
    public:
        struct nodeD<T> * First;

        DoublyLL();

        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();
};

////////////////////////////////////////////////////////////////

// Class of Doubly Circular Linked List

template <class T>
class DoublyCL
{
    public:
        struct nodeD<T> * First;

        DoublyCL();
        
        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();
};

////////////////////////////////////////////////////////////////

int main()
{
    
    return 0;
}