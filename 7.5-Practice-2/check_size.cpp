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

void insertData(Node *&head, int val)
{
    Node *newNode = new Node(val);

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

    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }

    return count;
}

void printq(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{
    Node *node1 = NULL;
    Node *node2 = NULL;

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
            insertData(node1, val);
        }
    }

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
            insertData(node2, val);
        }
    }

    // printq(node1);

    if (size(node1) == size(node2))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    // int sizeOfNode1 = size(node1);
    // int sizeOfNode2 = size(node2);

    // cout << sizeOfNode1 << endl;
    // cout << sizeOfNode2 << endl;

    // __________
    return 0;
}