#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int val)
    {
        this->value = val;
        this->next = NULL;
    }
};

void insertValue(Node *&head, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        return;
    };

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
};

int size(Node *head)
{
    Node *tmp = head;

    int count = 0;
    for (int i = 0; tmp != NULL; i++)
    {
        count++;
        tmp = tmp->next;
    }

    return count;
}

void printMiddlle(Node *head, int length)
{
    Node *tmp = head;
    int length;

    if (length % 2 != 0)
    {
        length = length / 2;
    }

    for (int i = 0; tmp != NULL; i++)
    {
    }
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            insertValue(head, val);
        }
    }
    int length = size(head);
    // cout << length;

    printMiddlle(head, length);
    // __________
    return 0;
}