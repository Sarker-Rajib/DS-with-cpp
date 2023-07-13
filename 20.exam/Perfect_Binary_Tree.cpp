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

int treeHeight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int l = treeHeight(root->left);
    int r = treeHeight(root->right);
    return max(l, r) + 1;
}

int totalNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int l = totalNodes(root->left);
    int r = totalNodes(root->right);
    return l + r + 1;
}

int main()
{
    Node *root = takeInput();
    int height = treeHeight(root);
    int allNodes = totalNodes(root);

    int possibleNodes = pow(2, height) - 1;

    if (allNodes == possibleNodes)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}