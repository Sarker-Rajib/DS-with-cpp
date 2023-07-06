#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> a;
    queue<int> b;

    int n, m;
    cin >> n >> m;

    list<int> myList1;
    list<int> myList2;

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

    while (!a.empty())
    {
        int x = a.top();
        myList1.push_back(x);
        a.pop();
    }

    while (!b.empty())
    {
        int x = b.front();
        myList2.push_back(x);
        b.pop();
    }

    if (myList1 == myList2)
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