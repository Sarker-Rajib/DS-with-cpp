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
        //    ber kore nei
        Node *p = q.front();
        q.pop();

        // operation
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

        // 3. children push
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

void levelOrderPrint(Node *root)
{
    if (root == NULL)
    {
        cout << "Root NULL";
        return;
    }

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

int countNode(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int l = countNode(root->left);
    int r = countNode(root->right);
    return l + r + 1;
}

int main()
{
    Node *root = takeInput();
    // levelOrderPrint(root);
    cout << countNode(root);

    return 0;
}