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

int judgeDuplicate(Node *head)
{
    Node *tmp = head;

    int arr[100] = {0};

    for (int i = 0; tmp != NULL; i++)
    {
        arr[tmp->value]++;
        tmp = tmp->next;
    }

    int count = 1;

    for (int i = 0; i < 100; i++)
    {
        if (arr[i] > 1)
        {
            count = arr[i];
            break;
        }
    }

    return count;
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

    int duplicate = judgeDuplicate(head);
    if (duplicate > 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    // __________
    return 0;
}