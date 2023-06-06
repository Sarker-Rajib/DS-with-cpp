#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> x = {10,
                     20,
                     30,
                     40,
                     50};

    x.pop_back();
    x.push_back(80);

    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }

    // vector<int> v = {1,
    //                  2,
    //                  3};

    // v = x;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // __________
    return 0;
}