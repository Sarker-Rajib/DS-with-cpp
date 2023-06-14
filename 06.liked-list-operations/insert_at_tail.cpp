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

void insertAtTail(Node *&head, int v)
{
    Node *newNode = new Node(v);
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

void printLikedList(Node *head)
{
    cout << "Your Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "option 1: insert at tail" << endl;
        cout << "option 2: Print List" << endl;
        cout << "option 3: terminate" << endl;

        int op;
        cin >> op;

        if (op == 1)
        {
            cout << "Please enter value: ";
            int v;
            cin >> v;
            insertAtTail(head, v);
        }
        else if (op == 2)
        {
            /* code */
            printLikedList(head);
            cout << endl;
        }
        else if (op == 3)
        {
            break;
        }
        else
        {
            break;
        }
    }

    // __________
    return 0;
}