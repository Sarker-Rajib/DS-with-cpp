#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    stack<int> newSt;

    while (!st.empty())
    {
        // cout << st.top() << " ";
        newSt.push(st.top());
        st.pop();
    }

    while (!newSt.empty())
    {
        cout << newSt.top() << " ";
        newSt.pop();
    }

    // __________
    return 0;
}