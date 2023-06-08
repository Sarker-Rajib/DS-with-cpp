#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    // cout << v.max_size();
    // cout << v.capacity() << endl;
    v.push_back(10);
    v.push_back(15);
    v.push_back(20);
    v.push_back(25);
    v.push_back(30);

    // v.clear();
    v.resize(2);
    v.resize(7, 9); // add new val

    // cout << v.capacity();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    // cout << v[1];

    // __________
    return 0;
}