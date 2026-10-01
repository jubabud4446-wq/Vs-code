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

void sort_linked_list(Node* &head, Node* &tail)
{
    vector<int> values;
    Node* temp = head;
    while (temp != NULL)
    {
        values.push_back(temp->value);
        temp = temp->next;
    }

    sort(values.begin(), values.end());

    temp = head;
    int index = 0;
    while (temp != NULL)
    {
        temp->value = values[index];
        index++;
        temp = temp->next;
    }
}

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

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    input_linked_list(head, tail);
    sort_linked_list(head, tail);
    print_linked_list(head);
    return 0;
}