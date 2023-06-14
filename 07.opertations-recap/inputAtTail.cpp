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

void Insert(Node *first, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = first;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
}

// insert at first node;
void InsertAtHead(Node *&first, int val)
{
    Node *newNode = new Node(val);

    newNode->next = first;
    first = newNode;
}

void InsertAtTail(Node *&first, Node *&last, int val)
{
    Node *newNode = new Node(val);

    if (first == NULL)
    {
        first = newNode;
        last = newNode;
        return;
    }

    last->next = newNode;
    last = newNode;
}

void printLinkedLIst(Node *a)
{
    Node *tmp = a;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int size(Node *a)
{
    Node *tmp = a;

    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }

    return count;
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

    int pos, val;
    cin >> pos >> val;

    if (pos > size(a))
    {
        cout << "Invalid input;";
    }
    else if (pos == 0)
    {
        InsertAtHead(a, val);
    }
    else if (pos == size(a))
    {
        InsertAtTail(a, d, val);
    }

    else
    {
        Insert(a, pos, val);
    }

    printLinkedLIst(a);
    // _____
    return 0;
}