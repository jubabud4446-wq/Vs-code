#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;
    Node(int v)
    {
        val = v;
        next = NULL;
    }
};

void insert_tail(Node*& head, Node*& tail, int v)
{
    Node* newNode = new Node(v);
    if (!head)
    {
        head = tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_list(Node* head)
{
    Node* temp = head;
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void remove_duplicates(Node* head)
{
    Node* curr = head;
    while (curr)
    {
        Node* temp = curr;
        while (temp->next)
        {
            if (temp->next->val == curr->val)
            {
                Node* delNode = temp->next;
                temp->next = delNode->next;
                delete delNode;
            }
            else
            {
                temp = temp->next;
            }
        }
        curr = curr->next;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (cin >> val && val != -1)
    {
        insert_tail(head, tail, val);
    }

    remove_duplicates(head);
    print_list(head);

    return 0;
}