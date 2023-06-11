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

int main()
{
    // Node A(20);
    Node *A = new Node(20);
    Node *B = new Node(40);
    Node *C = new Node(60);
    Node *D = new Node(80);
    Node *E = new Node(90);

    A->next = B;
    B->next = C;
    C->next = D;
    D->next = E;

    Node *tmp = A;

    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }

    // _____
    return 0;
}