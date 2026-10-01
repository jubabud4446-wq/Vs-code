#include <iostream>
using namespace std;

class Stack
{
    int *stck;     // dynamically allocated array
    int tos;       // top of stack
    int size;      // capacity of stack

public:
    Stack(int s);  // constructor
    ~Stack();      // destructor

    void push(int item);
    int pop();
};

// Constructor
Stack::Stack(int s)
{
    size = s;
    stck = new int[size];  // dynamic allocation
    tos = -1;
}

// Destructor
Stack::~Stack()
{
    delete[] stck;         // free memory
}

// Push element
void Stack::push(int item)
{
    if (tos == size - 1)
    {
        cout << "Stack overflow\n";
        return;
    }

    stck[++tos] = item;
}

// Pop element
int Stack::pop()
{
    if (tos == -1)
    {
        cout << "Stack underflow\n";
        return -1;
    }

    return stck[tos--];
}

int main()
{
    Stack s(5);   // size specified here

    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.pop() << endl;
    cout << s.pop() << endl;

    return 0;
}