#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> a = {16,
                     25,
                     34,
                     43,
                     52};

    // a.erase(a.begin() + 3);
    a.erase(a.begin(), a.begin() + 4);

    for (int x : a)
    {
        cout << x << " ";
    }
    // __________
    return 0;
}