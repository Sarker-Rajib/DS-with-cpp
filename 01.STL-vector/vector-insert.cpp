#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,
                     2,
                     3,
                     4,
                     5};

    vector<int> a = {16,
                     25,
                     34,
                     43,
                     52};

    v.insert(v.begin() + 2, 99);
    // v.insert(v.begin() + 2, a.begin(), a.end());

    for (int x : v)
    {
        cout << x << " ";
    }

    // __________
    return 0;
}