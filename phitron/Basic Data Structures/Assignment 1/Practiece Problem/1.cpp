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

int if_same(Node* head1, Node* head2)
{
    Node* temp1 = head1;
    Node* temp2 = head2;

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->value != temp2->value)
        {
            return 0;
        }

        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (temp1 == NULL && temp2 == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    cout << "Input first list: ";
    input_linked_list(head1, tail1);
    cout << "Input second list: ";
    input_linked_list(head2, tail2);

    if (if_same(head1, head2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}