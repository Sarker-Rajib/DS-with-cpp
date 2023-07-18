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

void insertVal(Node *&root, int x)
{
    if (root == NULL)
    {
        root = new Node(x);
    }

    if (x < root->val)
    {
        if (root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insertVal(root->left, x);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            insertVal(root->right, x);
        }
    }
};

void levelPrint(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        /* step one */
        Node *f = q.front();
        q.pop();

        // step two
        cout << f->val << " ";

        // step three
        if (f->left)
        {
            q.push(f->left);
        }

        if (f->right)
        {
            q.push(f->right);
        }
    }
};

int main()
{
    Node *root = takeInput();
    int x;
    cin >> x;
    insertVal(root, x);
    levelPrint(root);

    return 0;
}