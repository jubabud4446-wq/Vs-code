#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int value;
        Node* next;

    Node (int val)
    {
        this->value = val;
        this->next = NULL;
    }    
};

void insert_at_tale(Node *&head, Node *&tail, int val)
{
    
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print_linked_list(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
}

int main()
{
    // Node *head = NULL;
    Node *head = new Node(10);
    Node *tail = new Node(20);

    head->next = tail;

    insert_at_tale(head, tail, 30);
    insert_at_tale(head, tail, 40);
    insert_at_tale(head, tail, 50);

    print_linked_list(head);
    cout << "Head: " << head->value << endl;
    cout << "Tail: " << tail->value << endl;
    return 0;
}