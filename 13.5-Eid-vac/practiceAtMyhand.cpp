#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertValue(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
};

int main()
{
    Node *head(NULL);
    Node *tail(NULL);

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
            insertValue(head, tail, v);
        }
    }

    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;

    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }

    // __________
    return 0;
}