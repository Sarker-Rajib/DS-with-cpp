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
    Node *B = new Node(80);

    A->next = B;

    cout << A->val << endl;
    cout << A->next->val;

    // __________
    return 0;
}