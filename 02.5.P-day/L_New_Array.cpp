#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> ar1(n);
    vector<int> ar2(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ar1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> ar2[i];
    }

    vector<int> c(ar2);

    for (int i = 0; i < n; i++)
    {
        c.push_back(ar1[i]);
    }

    for (int i = 0; i < n + n; i++)
    {
        cout << c[i] << " ";
    }

    // _____
    return 0;
}