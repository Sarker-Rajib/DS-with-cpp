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

bool compareTwoList(Node *a, Node *b, int size1, int size2)
{
    Node *tmp1 = a;
    Node *tmp2 = b;

    bool copareVal = true;

    if (size1 != size2)
    {
        copareVal = false;
    }
    else
    {
        while (tmp1 != NULL)
        {
            if (tmp1->val != tmp2->val)
            {
                copareVal = false;
            }
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
    }

    return copareVal;
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

int main()
{
    Node *head(NULL);
    Node *head2(NULL);

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
            insertValue(head2, value);
        }
    }

    int size1 = size(head);
    int size2 = size(head2);

    bool comResult = compareTwoList(head, head2, size1, size2);

    if (comResult == true)
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