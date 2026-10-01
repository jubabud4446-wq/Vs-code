#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* next;

    Node(int val)
    {
        this->value = val;
        this->next = nullptr;
    }
};

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

int get_size(Node *head)
{
    int size = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        size++;
        temp = temp->next;
    }
    return size;
}

void insert_at_any(Node *&head, int index, int val)
{
    if (index < 0)
    {
        cout << "Invalid index: " << index << endl;
        return;
    }

    if (index == 0)
    {
        insert_at_head(head, val);
        return;
    }

    int size = get_size(head);
    if (index > size)
    {
        cout << "Index " << index << " s ouit of bounds. List size is " << size << "." << endl;
        return;
    }

    Node *newNode = new Node(val);
    Node *temp = head;

    // Traverse to the node just before the insertion point
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void print_linked_list(Node *head)
{
    int count_size = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->value << endl;
        temp = temp->next;
        count_size++;
    }
    cout << "Size of Linked List: " << count_size << endl;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_any(head, 3, 100);  // Valid insertion at index 3
    insert_at_head(head, -10);
    insert_at_head(head, -20);
    insert_at_head(head, -30);
    insert_at_tail(head, 40);
    insert_at_tail(head, 50);
    insert_at_tail(head, 60);
    insert_at_any(head, 5, 9999);
    print_linked_list(head);

    return 0;
}