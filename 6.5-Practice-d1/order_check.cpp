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

int checkValue(Node *head)
{
    Node *tmp = head;
    bool condition = true;

    int tempo = 0;

    while (tmp != NULL)
    {
        if (tempo < tmp->value)
        {
            tempo = tmp->value;
            tmp = tmp->next;
        }
        else
        {
            condition = false;
            break;
        }
    }

    if (condition == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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
            // cout << val << endl;
        }
    }

    checkValue(head);

    // __________
    return 0;
}