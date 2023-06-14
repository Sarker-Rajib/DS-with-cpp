#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void printLinkedLIst(Node *a)
{
    Node *tmp = a;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{
    Node *a = new Node(11);
    Node *b = new Node(22);
    Node *c = new Node(33);
    Node *d = new Node(44);

    a->next = b;
    b->next = c;
    c->next = d;

    printLinkedLIst(a);
    // _____
    return 0;
}