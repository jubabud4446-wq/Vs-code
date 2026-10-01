#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    long long value;
    Node* next;

    Node(long long val)
    {
        this->value = val;
        this->next = NULL;
    }    
};

void print_linked_list(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_at_head(Node*& head, Node*& tail, long long val)
{
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;

    if (tail == NULL)
        tail = newNode;
}

void insert_at_tail(Node*& head, Node*& tail, long long val)
{
    Node* newNode = new Node(val);
    if (head == NULL)
    {
        head = tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void delete_at_index(Node*& head, Node*& tail, long long index)
{
    if (!head) return;

    if (index == 0)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
        if (!head) tail = NULL;
        return;
    }

    Node* temp = head;
    for (long long i = 0; i < index - 1 && temp; i++) {
    temp = temp->next;
}
if (!temp || !temp->next)
    return;

Node* delNode = temp->next;
temp->next = delNode->next;
if (delNode == tail)
    tail = temp;
delete delNode;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int Q;
    cin >> Q;

    while (Q--)
    {
        int X;
        long long V;
        cin >> X >> V;

        if (X == 0)
            insert_at_head(head, tail, V);
        else if (X == 1)
            insert_at_tail(head, tail, V);
        else if (X == 2)
            delete_at_index(head, tail, V);

        print_linked_list(head);
    }

    return 0;
}