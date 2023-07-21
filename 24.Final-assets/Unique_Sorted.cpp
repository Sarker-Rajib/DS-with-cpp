#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        list<int> NumList;

        int nums;
        cin >> nums;

        for (int i = 0; i < nums; i++)
        {
            int x;
            cin >> x;
            NumList.push_back(x);
        }

        NumList.sort(greater<int>());
        NumList.unique();

        for (auto val : NumList)
        {
            cout << val << " ";
        }

        cout << endl;
    }

    // __________
    return 0;
}