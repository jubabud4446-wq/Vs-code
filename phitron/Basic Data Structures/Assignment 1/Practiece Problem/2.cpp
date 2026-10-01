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

void reverce_linked_list(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->pre;
    }
}

int main()
{
    cout << "Input Linked List (-1 to end): " << endl;
    Node* head1 = NULL;
    Node* tail1 = NULL;
    input_linked_list(head1, tail1);
    cout << "Reverced Linked List: " << endl;
    reverce_linked_list(tail1);
    return 0;
}