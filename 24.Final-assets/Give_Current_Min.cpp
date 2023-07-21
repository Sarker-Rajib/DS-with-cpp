#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pQue;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pQue.push(x);
    }

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            int x;
            cin >> x;
            pQue.push(x);
            cout << pQue.top() << endl;
        }
        else if (x == 1)
        {
            if (pQue.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pQue.top() << endl;
            }
        }
        else if (x == 2)
        {
            if (pQue.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                pQue.pop();
                if (pQue.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << pQue.top() << endl;
                }
            }
        }
    }

    // __________
    return 0;
}