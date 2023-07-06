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

void takeInput(Node *&head, Node *&tail, int x)
{
    Node *newNode = new Node(x);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }

    void pop()
    {
        sz--;
        Node *deletedNode = tail;
        tail = tail->prev;

        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }

        delete deletedNode;
    }

    int top()
    {
        return tail->val;
    }

    bool empty()
    {
        if (sz == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }

    void pop()
    {
        sz--;
        Node *deletedNod = head;
        head = head->next;

        if (head == NULL)
        {
            tail = NULL;
            delete deletedNod;
            return;
        }

        delete deletedNod;
        head->prev = NULL;
    }

    int front()
    {
        return head->val;
    }

    bool empty()
    {
        if (sz == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

bool compareList(Node *list1, Node *list2, int sz1, int sz2)
{
    if (sz1 != sz2)
    {
        return false;
    }
    else
    {
        while (list1 != NULL)
        {
            if (list1->val == list2->val)
            {
                list1 = list1->next;
                list2 = list2->next;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    myStack a;
    myQueue b;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.push(x);
    }

    Node *head1(NULL);
    Node *tail1(NULL);
    int sizeOfHead1 = 0;

    while (!a.empty())
    {
        sizeOfHead1++;
        int x = a.top();
        takeInput(head1, tail1, x);
        a.pop();
    }

    Node *head2(NULL);
    Node *tail2(NULL);
    int sizeOfHead2 = 0;

    while (!b.empty())
    {
        sizeOfHead2++;
        int x = b.front();
        takeInput(head2, tail2, x);
        b.pop();
    }

    if (compareList(head1, head2, sizeOfHead2, sizeOfHead1) == true)
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