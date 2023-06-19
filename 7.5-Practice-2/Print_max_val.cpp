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

void InputData(Node *&head, int val)
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

int returnMax(Node *head)
{
    Node *tmp = head;
    int maxVal = INT_MIN;

    while (tmp != NULL)
    {
        if (maxVal < tmp->value)
        {
            maxVal = tmp->value;
        }

        tmp = tmp->next;
    }

    return maxVal;
};

int main()
{
    Node *head = NULL;

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
            InputData(head, value);
        }
    }

    int maxVal = returnMax(head);
    cout << maxVal;

    // __________
    return 0;
}