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

void print_linked_list(Node* head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

void Reverse_print_linked_list(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        return;
    }
    Reverse_print_linked_list(temp->next);
    cout << temp->value << " ";
}

void input_linked_list(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void delete_linked_list_at_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void delete_linked_list_at_any(Node *&head, int index)
{
    Node *temp = head;
    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = deleteNode->next;
    delete deleteNode;
}

void delete_linked_list_at_tail(Node *&head)
{
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

void sort_linked_list(Node *&head)
{
    for (Node *temp = head; temp->next != NULL; temp = temp->next)
    {
        for (Node *temp2 = temp->next; temp2 != NULL; temp2 = temp2->next)
        {
            if (temp->value > temp2->value)
            {
                swap(temp->value, temp2->value);
            }
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1) break;
        input_linked_list(head, tail, val);
    }
    sort_linked_list(head);
    print_linked_list(head);
    return 0;
}