#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {12, 11, 22, 21};
    // myList.clear();

    myList.resize(2);
    myList.resize(5, 100);
    // myList.resize(4);

    // cout << myList.size();
    // cout << myList.max_size();

    for (int val : myList)
    {
        cout << val << endl;
    }

    // __________
    return 0;
}