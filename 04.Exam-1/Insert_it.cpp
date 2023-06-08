#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    vector<int> v1(a);
    for (int i = 0; i < a; i++)
    {
        cin >> v1[i];
    }

    int b;
    cin >> b;
    vector<int> v2(b);
    for (int i = 0; i < b; i++)
    {
        cin >> v2[i];
    }

    int x;
    cin >> x;

    v1.insert(v1.begin() + x, v2.begin(), v2.end());

    for (int i = 0; i < a + b; i++)
    {
        cout << v1[i] << " ";
    }

    // __________
    return 0;
}