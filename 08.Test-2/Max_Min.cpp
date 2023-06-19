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

void minMax(Node *head)
{
    Node *tmp = head;
    int maxVal = INT_MIN;
    int minVal = INT_MAX;

    while (tmp != NULL)
    {
        int val1 = tmp->val;
        int val2 = tmp->val;

        if (minVal > val1)
        {
            minVal = tmp->val;
        }

        if (maxVal < val2)
        {
            maxVal = tmp->val;
        }

        tmp = tmp->next;
    }

    cout << maxVal << " " << minVal;
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

    minMax(head);

    // __________
    return 0;
}