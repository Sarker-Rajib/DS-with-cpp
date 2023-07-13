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

int minLeafVal(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return root->val;
    }

    else
    {
        int l, r;
        if (root->left)
        {
            l = minLeafVal(root->left);
        }
        if (root->right)
        {
            r = minLeafVal(root->right);
        }

        return min(l, r);
    }
}

int maxLeafVal(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return root->val;
    }

    else
    {

        int l = maxLeafVal(root->left);
        int r = maxLeafVal(root->right);
        return max(l, r);
    }
}

int main()
{
    Node *root = makeTree();
    cout << maxLeafVal(root) << " " << minLeafVal(root);
    return 0;
}