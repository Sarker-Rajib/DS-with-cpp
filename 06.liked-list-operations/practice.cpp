#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int v)
    {
        this->val = v;
        this->next = NULL;
    }
};

void Insert_at_tail(Node *&Head, int val)
{
    Node *newNode = new Node(val);

    if (Head == NULL)
    {
        Head = newNode;
        return;
    }

    Node *tmp = Head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = newNode;
};

void printNode(Node *head)
{
    cout << "Your Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *Head = NULL;

    while (true)
    {
        int op;
        cin >> op;

        if (op == 1)
        {
            int v;
            cin >> v;
            Insert_at_tail(Head, v);
        }
        else if (op = 2)
        {
            /* code */
            printNode(Head);
        }
        else
        {
            break;
        }
    }

    // __________
    return 0;
}