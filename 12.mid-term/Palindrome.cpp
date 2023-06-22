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

void insertValue(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}

void makeReverse(Node *&head, Node *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    }
    makeReverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}

bool isPalindrome(Node *head)
{
    Node *compHead = NULL;
    Node *compTail = NULL;

    Node *temp = head;
    while (temp != NULL)
    {
        insertValue(compHead, compTail, temp->val);
        temp = temp->next;
    }

    makeReverse(compHead, compHead);

    temp = head;
    Node *temp2 = compHead;

    while (temp2 != NULL)
    {
        if (temp->val != temp2->val)
        {
            return false;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
    return true;
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

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
            insertValue(head, tail, val);
        }
    }

    if (isPalindrome(head) == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}