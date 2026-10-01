// Practice Problem 4 (Module 15) - Input Tree + Level Order

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* left;
    Node* right;

    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

Node* input_tree()
{
    int val;
    cin >> val;

    if (val == -1) return NULL;

    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if(l != -1)
        {
            f->left = new Node(l);
            q.push(f->left);
        }

        if(r != -1)
        {
            f->right = new Node(r);
            q.push(f->right);
        }
    }

    return root;
}

void level_order(Node* root)
{
    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        cout << f->val << " ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}

int main()
{
    Node* root = input_tree();
    level_order(root);

    return 0;
}