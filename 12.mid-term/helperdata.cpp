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

void insertValue(Node *&first, Node *&last, int val)
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

void printVal(Node *head)
{
    Node *tempo = head;
    while (tempo != NULL)
    {
        cout << tempo->val << " ";
        tempo = tempo->next;
    }
};

void printReverseVal(Node *head)
{
    if (head == NULL)
        return;
    printReverseVal(head->next);
    cout << head->val << " ";
};

int main()
{
    Node *head(NULL);
    Node *tail(NULL);

    while (true)
    {
        int value;
        cin >> value;

        if (value == -1)
        {
            break;
        }
        else
        {
            insertValue(head, tail, value);
        }
    }

    printReverseVal(head);
    cout << endl;
    printVal(head);

    // _____
    return 0;
}