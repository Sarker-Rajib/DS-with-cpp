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

Node *makeTree()
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

void printReverse(Node *root)
{
    vector<int> values;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        /* step one */
        Node *f = q.front();
        q.pop();

        // step two
        values.push_back(f->val);

        if (f->right)
        {
            q.push(f->right);
        }

        if (f->left)
        {
            q.push(f->left);
        }
    }

    reverse(values.begin(), values.end());

    for (int val : values)
    {
        cout << val << " ";
    }
};

int main()
{
    Node *root = makeTree();
    printReverse(root);
    return 0;
}