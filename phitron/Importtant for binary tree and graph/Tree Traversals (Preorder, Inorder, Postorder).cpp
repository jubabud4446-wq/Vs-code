// Practice Problem 4 (Module 15) - DFS Traversals

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

void preorder_print(Node* root, vector<int>& pre_ans)
{
    if (root == NULL) return;

    pre_ans.push_back(root->val);
    preorder_print(root->left, pre_ans);
    preorder_print(root->right, pre_ans);
}

void inorder_print(Node* root, vector<int>& in_ans)
{
    if (root == NULL) return;

    inorder_print(root->left, in_ans);
    in_ans.push_back(root->val);
    inorder_print(root->right, in_ans);
}

void postorder_print(Node* root, vector<int>& post_ans)
{
    if (root == NULL) return;

    postorder_print(root->left, post_ans);
    postorder_print(root->right, post_ans);
    post_ans.push_back(root->val);
}

void print_vector(const string& name, vector<int>& v)
{
    cout << name << " = ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
        if (i != v.size() - 1) cout << ",";
    }
    cout << endl;
}

int main()
{
    Node* root = new Node(1);
    Node* a = new Node(7);
    Node* b = new Node(2);
    Node* c = new Node(6);
    Node* d = new Node(5);
    Node* e = new Node(11);
    Node* f = new Node(9);
    Node* g = new Node(9);
    Node* h = new Node(5);

    root->left = a;
    a->left = b;
    a->right = c;
    c->left = d;
    c->right = e;
    root->right = f;
    f->right = g;
    g->left = h;

    vector<int> pre_ans, in_ans, post_ans;

    preorder_print(root, pre_ans);
    inorder_print(root, in_ans);
    postorder_print(root, post_ans);

    print_vector("Preorder", pre_ans);
    print_vector("Inorder", in_ans);
    print_vector("Postorder", post_ans);

    return 0;
}