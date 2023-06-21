#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {11, 22};
    // list<int> newList;

    // newList = myList;
    // newList.assign(myList.begin(), myList.end());

    // myList.pop_back();
    // myList.push_back(100);
    // myList.push_back(100);
    // myList.pop_front();
    // myList.insert(next(myList.begin(), 1), 100);
    myList.insert(next(myList.begin(), 1), {2, 3, 5, 6});

    // for (int val : myList)
    // {
    //     cout << val << " ";
    // }

    replace(myList.begin(), myList.end(), 2, 100);
    auto it = find(myList.begin(), myList.end(), 10);
    if (it == myList.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }

    // _____
    return 0;
}