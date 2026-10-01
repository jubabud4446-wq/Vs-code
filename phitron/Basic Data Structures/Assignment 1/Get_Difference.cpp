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


// void sort_linked_list(Node *&head)
// {
//     for (Node *temp = head; temp->next != NULL; temp = temp->next)
//     {
//         for (Node *temp2 = temp->next; temp2 != NULL; temp2 = temp2->next)
//         {
//             if (temp->value > temp2->value)
//             {
//                 swap(temp->value, temp2->value);
//             }
//         }
//     }
// }

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
    // sort_linked_list(head);
    // cout << tail->value - head->value << endl;
    if (head == NULL || head->next == NULL)
    {
        cout << 0 << endl;
        return 0;
    }

    int minVal = head->value;
    int maxVal = head->value;

    Node* temp = head;
    while (temp != NULL)
    {
        minVal = min(minVal, temp->value);
        maxVal = max(maxVal, temp->value);
        temp = temp->next;
    }

    cout << maxVal - minVal << endl;
    return 0;
}