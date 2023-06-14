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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }

        InsertAtTail(head, tail, val);
    }

    printLinkedLIst(head);

    // _____
    return 0;
}