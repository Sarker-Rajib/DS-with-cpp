#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {12, 20, 30, 30, 40, 55, 100};

    auto it = find(v.begin(), v.end(), 100);

    if (it == v.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }
    // __________
    return 0;
}