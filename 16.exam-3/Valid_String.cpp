#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        stack<char> charStore;

        string s;
        cin >> s;

        for (char c : s)
        {
            if (!charStore.empty())
            {
                if (c == 'A' && charStore.top() == 'B')
                {
                    charStore.pop();
                }
                else if (c == 'B' && charStore.top() == 'A')
                {
                    charStore.pop();
                }
                else
                {
                    charStore.push(c);
                }
            }
            else
            {
                charStore.push(c);
            }
        }

        if (charStore.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    // __________
    return 0;
}