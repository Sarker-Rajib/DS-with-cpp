#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> mylist = {56, 78, 90, 64, 9, 90, 23};

    // mylist.remove(90);

    // mylist.sort();
    // mylist.sort(greater<int>());
    // mylist.unique();
    mylist.reverse();

    for (int val : mylist)
    {
        cout << val << " ";
    }

    // __________
    return 0;
}