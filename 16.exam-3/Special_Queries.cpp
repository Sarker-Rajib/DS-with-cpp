#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    queue<string> name;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            string n;
            cin >> n;
            name.push(n);
        }
        if (x == 1)
        {
            if (name.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << name.front() << endl;
                name.pop();
            }
        }
    }

    // __________
    return 0;
}