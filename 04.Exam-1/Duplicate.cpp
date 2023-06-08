#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    sort(ar, ar + n);

    bool cond = false;

    int j = 1;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == ar[j])
        {
            cond = true;
        }
        j++;
    }

    if (cond == true)
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