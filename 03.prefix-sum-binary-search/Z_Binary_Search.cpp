#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int x;
    cin >> x;
    int l = 0;
    int r = n - 1;
    bool flag = false;

    sort(a, a + n);

    while (l <= r)
    {
        int mid_in = (l + r) / 2;

        if (a[mid_in] == x)
        {
            flag = true;
            break;
        }

        if (x > a[mid_in])
        {
            l = mid_in + 1;
        }
        else
        {
            r = mid_in - 1;
        }
    }
    if (flag == true)
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    // __________
    return 0;
}