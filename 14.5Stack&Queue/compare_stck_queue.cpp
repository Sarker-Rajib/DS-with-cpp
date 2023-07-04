#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    int ns;
    cin >> ns;

    for (int i = 0; i < ns; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // for (int i = 0; i < ns; i++)
    // {
    //     /* code */
    //     cout << st.top();
    //     st.pop();
    // }

    queue<int> q;
    int nq;
    cin >> nq;

    for (int i = 0; i < nq; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    // for (int i = 0; i < ns; i++)
    // {
    //     /* code */
    //     cout << q.front();
    //     q.pop();
    // }

    // cout << st.size();
    // cout << q.size();

    if (q.size() != st.size())
    {
        cout << "No";
    }
    else
    {
        while (!st.empty())
        {
            if (st.top() == q.front())
            {
                st.pop();
                q.pop();

                if (st.size() == 0)
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

    // _____
    return 0;
}