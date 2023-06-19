// Problem Statement

// You have a singly linked list which is empty initially.
// Then you will be given Q queries. In each query you will be given two values X and V.
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int v)
    {
        this->next = NULL;
        this->val = v;
    }
};

void InsertValueAtHead(Node *&first, Node *&last, int val)
{
    Node *newNode = new Node(val);

    if (first == NULL)
    {
        first = newNode;
        last = newNode;
        return;
    }

    newNode->next = first;
    first = newNode;
}

void insertValAtTail(Node *&first, Node *&last, int val)
{
    Node *newNode = new Node(val);

    if (first == NULL)
    {
        first = newNode;
        last = newNode;
        return;
    }

    last->next = newNode;
    last = newNode;
}

int main()
{
    int n;
    cin >> n;

    Node *head(NULL);
    Node *tail(NULL);

    for (int i = 0; i < n; i++)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            InsertValueAtHead(head, tail, v);
        }
        else if (x == 1)
        {
            insertValAtTail(head, tail, v);
        }
        cout << head->val << " " << tail->val << endl;
    }

    // __________
    return 0;
}

// If X is 0 that means you will insert the value V to the head of the linked list.
// And if X is 1 then you will insert the value V to the tail of the linked list.
// After that for each query you need to print the value of the head and tail of the list.

// Query 1: 10 is inserted at head. Linked list looks like: 10->NULL. Now both head and tail are 10.
// Query 2: 20 is inserted at head. Linked list looks like: 20->10->NULL. Now head is at 20 and tail is at 10.
// Query 3: 30 is inserted at tail. Linked list looks like: 20->10->30->NULL. Now head is at 20 and tail is at 30.
// Query 4: 40 is inserted at head. Linked list looks like: 40->20->10->30->NULL. Now head is at 40 and tail is at 30.
// Query 5: 50 is inserted at tail. Linked list looks like: 40->20->10->30->50->NULL. Now head is at 40 and tail is at 50.