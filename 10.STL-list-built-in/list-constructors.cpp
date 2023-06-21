#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> myList;
    // list<int> myList(10);
    // list<int> myList(10, 5);
    // list<int> list2 = {1, 2, 3, 4, 5};
    // list<int> myList(list2);

    // int a[5] = {11, 21, 32, 41, 15};
    // list<int> myList(a, a + 5);

    vector<int> v = {12, 11, 22, 21};
    list<int> myList(v.begin(), v.end());

    cout << myList.size() << endl;

    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    for (int val : myList)
    {
        cout << val << " ";
    }

    // __________
    return 0;
}