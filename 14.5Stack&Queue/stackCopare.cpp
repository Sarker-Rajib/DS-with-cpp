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

class myListStack
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

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
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

    int size()
    {
        return sz;
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

int main()
{
    myListStack st1;
    myListStack st2;

    int n1;
    cin >> n1;

    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }

    int n2;
    cin >> n2;

    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }

    if (st1.size() != st2.size())
    {
        cout << "No";
    }
    else
    {
        while (!st1.empty())
        {
            if (st1.top() == st2.top())
            {
                st1.pop();
                st2.pop();

                if (st1.size() == 0)
                {
                    cout << "YES";
                }
            }
            else
            {
                cout << "NO";
                break;
            }
        }
    }

    // __________
    return 0;
}