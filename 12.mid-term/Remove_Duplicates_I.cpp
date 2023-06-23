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

void InsertValues(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void sortData(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}

void makeUnique(Node *head)
{

    if (head == NULL)
    {
        head = head;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        if (tmp->val == tmp->next->val)
        {
            Node *deleteNode = tmp->next;
            tmp->next = tmp->next->next;
            delete deleteNode;
        }

        if (tmp->next == NULL)
        {
            break;
        }
        else if (tmp->val != tmp->next->val)
        {
            tmp = tmp->next;
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int v;
        cin >> v;

        if (v == -1)
        {
            break;
        }
        else
        {
            InsertValues(head, tail, v);
        }
    }

    sortData(head);
    makeUnique(head);

    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

    // __________
    return 0;
}