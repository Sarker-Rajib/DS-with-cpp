#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        int nums;
        cin >> nums;
        map<int, int> sets;

        for (int i = 0; i < nums; i++)
        {
            int x;
            cin >> x;
            sets[x]++;
        }

        int maxCountednum;
        int maxCountFornum = 0;

        for (auto mapEl : sets)
        {
            if (mapEl.second >= maxCountFornum)
            {
                maxCountednum = mapEl.first;
                maxCountFornum = mapEl.second;
            }
        }

        cout << maxCountednum << " " << maxCountFornum << endl;
    }

    // __________
    return 0;
}