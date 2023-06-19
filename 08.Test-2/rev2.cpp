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

void insertValue(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
};

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
    Node *tmp = head;
    Node *newOne = NULL;

    while (tmp != NULL)
    {
        Node *newNode = new Node(tmp->val);

        newNode->next = newOne;
        newOne = newNode;
        tmp = tmp->next;
    }
    printVal(newOne);
};

int main()
{
    Node *head(NULL);

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
            insertValue(head, value);
        }
    }

    printReverseVal(head);
    cout << endl;
    printVal(head);

    // _____
    return 0;
}