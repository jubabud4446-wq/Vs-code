#include <bits/stdc++.h>
using namespace std;

#define SIZE 10

// Character Stack Class
class CharStack
{
    char stck[SIZE];
    int tos;
    char who;

public:
    CharStack(char c);
    void push(char ch);
    char pop();
};

// Constructor
CharStack::CharStack(char c)
{
    tos = 0;
    who = c;
    cout << "Constructing stack " << who << "\n";
}

// Push
void CharStack::push(char ch)
{
    if (tos == SIZE)
    {
        cout << "Stack " << who << " is full\n";
        return;
    }

    stck[tos++] = ch;
}

// Pop
char CharStack::pop()
{
    if (tos == 0)
    {
        cout << "Stack " << who << " is empty\n";
        return 0;
    }

    return stck[--tos];
}

int main()
{
    CharStack s1('A'), s2('B');

    int i;

    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');

    for (i = 0; i < 5; i++)
        cout << "Pop s1: " << s1.pop() << "\n";

    for (i = 0; i < 5; i++)
        cout << "Pop s2: " << s2.pop() << "\n";

    return 0;
}