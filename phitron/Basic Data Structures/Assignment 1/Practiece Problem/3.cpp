#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int value;
        Node* next;
        Node* pre;
    Node (int val)
    {
        this->value = val;
        this->next = NULL;
        this->pre = NULL;
    }
};



void input_linked_list(Node* &head, Node* &tail)
{
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }

        Node* newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            continue;
        }

        tail->next = newNode;
        newNode->pre = tail;
        tail = newNode;
    }
}



int is_palindrome(Node* head, Node* tail)
{
    Node* temp = head;
    while (temp != NULL)
    {
        if (temp->value != tail->value)
        {
            return 0;
        }
        temp = temp->next;
        tail = tail->pre;
    }
    return 1;
}



int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    input_linked_list(head, tail);
    if (is_palindrome(head, tail))
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}