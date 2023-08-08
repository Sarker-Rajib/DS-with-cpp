/*  Problem Statement:
    Yunus Ali is working with binary trees. But he is not loving the order of the tree,
    he wants to optimize it so that he can do some operation easily. For this reason,
    he is converting the binary tree into something like that when taking out from the tree
    the value will be sorted and
    also he can put new values into that tree.

    You will be given an initial binary tree in level order.
    After that you need to do Q operations on it. Any operation is of two types

    Insert a value in that tree.
    Delete the maximum value from that tree and print it.
    It is guranteed that, there will be minimum one type 2 operation.

    Input Format:
    You will be given the initial binary tree in level order,
    if the value is -1 that means there is no node.
    Next line will contain Q, the number of operations
    Next Q lines will contain the operations.
    The type will be either 1 or 2.
    Constraints

    V (0 <= V <= 100), value of a node.
    0 < Q <= 100
    Output Format

    Output for type 2 operation
*/

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

void delete_and_find_max(Node *&root, int &v)
{
    if (root == NULL)
    {
        return;
    }
    if (root->val > v)
    {
        v = root->val;
        // root = NULL;
    }

    delete_and_find_max(root->left, v);

    delete_and_find_max(root->right, v);
};

int main()
{
    Node *root = takeInput();

    int n;
    cin >> n;
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == 1)
        {
            int val;
            cin >> val;
            insertVal(root, val);
        }

        if (x == 2)
        {
            delete_and_find_max(root, max);
            cout << max << endl;
        }
    }

    // __________
    return 0;
}