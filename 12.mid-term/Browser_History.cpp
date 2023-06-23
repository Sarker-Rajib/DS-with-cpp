#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void InsertValues(Node *&head, Node *&tail, string val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
};

void takeATour(Node *&head, Node *&functional, string address)
{
    stringstream ss(address);
    string word;
    string target;

    while (ss >> word)
    {
        if (word != "visit")
        {
            target = word;
        }
    }

    // cout << target;

    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == target)
        {
            functional = tmp;
            cout << functional->val << endl;
            return;
        }
        tmp = tmp->next;
    }

    cout << "Not Available" << endl;
}

void searchPrev(Node *&head)
{
    if (head->prev == NULL)
    {
        cout << "Not Available";
    }
    else
    {
        head = head->prev;
        cout << head->val;
    }
}

void searchNext(Node *&head)
{
    if (head->next == NULL)
    {
        cout << "Not Available";
    }
    else
    {
        head = head->next;
        cout << head->val;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    Node *functional = NULL;

    while (true)
    {
        string s;
        cin >> s;
        if (s == "end")
        {
            break;
        }
        else
        {
            InsertValues(head, tail, s);
        }
    };

    int n;
    cin >> n;
    cin.ignore();

    for (int i = 1; i <= n; i++)
    {
        string q;
        getline(cin, q);

        if (q == "prev")
        {
            searchPrev(functional);
            cout << endl;
        }
        else if (q == "next")
        {
            searchNext(functional);
            cout << endl;
        }
        else
        {
            takeATour(head, functional, q);
        }
    }

    // __________
    return 0;
}