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

    long long pref[n];
    pref[0] = ar[0];

    for (int i = 1; i < n; i++)
    {
        pref[i] = ar[i] + pref[i - 1];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << pref[i] << " ";
    }

    // __________
    return 0;
}