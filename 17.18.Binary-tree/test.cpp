#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // cout << i + 1 << " ";
        if (i % 2 == 1)
        {
            cout << i << " ";
        }
    }

    return 0;
}