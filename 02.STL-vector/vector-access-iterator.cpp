#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {12, 20, 30, 30, 40, 55, 100};

    cout << v.back() << endl;
    cout << v.front() << endl;
    cout << v[0] << endl;

    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }

    // __________
    return 0;
}