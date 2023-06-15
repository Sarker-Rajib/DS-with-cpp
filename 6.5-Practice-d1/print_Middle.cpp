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
    int mid = length / 2;

    int inde = 0;

    while (tmp != NULL)
    {

        if (length % 2 == 1)
        {
            if (inde == mid)
            {
                cout << tmp->value;
            }
        }

        if (length % 2 == 0)
        {
            if (inde == mid - 1)
            {
                cout << tmp->value << " ";
            }

            if (inde == mid)
            {
                cout << tmp->value;
            }
        }
        inde++;
        tmp = tmp->next;
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