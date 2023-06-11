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
    Node a(101), b(103);

    a.next = &b;

    cout << a.next->val;
    // __________
    return 0;
}