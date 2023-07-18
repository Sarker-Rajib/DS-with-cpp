#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *takeInput()
{
    int val;
    cin >> val;
    Node *root;

    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }

    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *newLeft;
        Node *newRight;

        if (l == -1)
        {
            newLeft = NULL;
        }
        else
        {
            newLeft = new Node(l);
        }

        if (r == -1)
        {
            newRight = NULL;
        }
        else
        {
            newRight = new Node(r);
        }

        p->left = newLeft;
        p->right = newRight;

        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }

    return root;
};

bool searchBST(Node *root, int x)
{

    if (root == NULL)
    {
        return false;
    }
    if (root->val == x)
    {
        return true;
    }

    if (root->val > x)
    {
        return searchBST(root->left, x);
    }
    else
    {
        return searchBST(root->right, x);
    }
};

int main()
{
    Node *root = takeInput();
    int x;
    cin >> x;
    searchBST(root, x) ? cout << "Found" : cout << "Not Found";

    return 0;
}