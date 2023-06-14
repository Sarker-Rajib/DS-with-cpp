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

void delet(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deletedNoode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletedNoode;
};

void deleteHead(Node *&Head)
{
    Node *deleteNode = Head;
    Head = Head->next;
    delete deleteNode;
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

    printLinkedLIst(a);
    cout << endl;

    int pos = 0;

    if (pos >= size(a))
    {
        cout << "Invalid Input" << endl;
    }
    else if (pos == 0)
    {
        deleteHead(a);
    }
    else
    {
        delet(a, pos);
    }

    printLinkedLIst(a);
    // _____
    return 0;
}