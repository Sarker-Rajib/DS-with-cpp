#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        int ar[x];

        for (int i = 0; i < x; i++)
        {
            cin >> ar[i];
        }

        int j = 1;
        bool cond = false;
        for (int i = 0; i < x - 1; i++)
        {
            if (ar[i] > ar[j])
            {
                cond = true;
                break;
            }

            // cout << ar[i] << ar[j] << endl;

            j++;
        }

        if (cond == true)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    // __________
    return 0;
}