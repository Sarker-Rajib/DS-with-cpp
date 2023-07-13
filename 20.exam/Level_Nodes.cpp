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

void nodeLevel(Node *root, int targetLevel)
{
    int h = treeHeight(root);
    if (targetLevel >= h)
    {
        cout << "Invalid";
    }
    else
    {

        queue<pair<Node *, int>> q;
        if (root)
        {
            q.push({root, 0});
        }

        vector<int> val;

        while (!q.empty())
        {
            pair<Node *, int> placement = q.front();

            Node *node = placement.first;
            int level = placement.second;
            q.pop();

            if (level == targetLevel)
            {
                val.push_back(node->val);
            }

            if (node->left)
            {
                q.push({node->left, level + 1});
            }
            if (node->right)
            {
                q.push({node->right, level + 1});
            }
        }

        for (int v : val)
        {
            cout << v << " ";
        }
    }
}

int main()
{
    Node *root = takeInput();
    int height = treeHeight(root);
    int x;
    cin >> x;
    nodeLevel(root, x);

    return 0;
}
