#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string aLine;
        getline(cin, aLine);

        map<string, int> wards;

        stringstream ss(aLine);
        string ward;

        string maxCountedWard;
        int maxCountForWard = 0;

        while (ss >> ward)
        {
            wards[ward]++;

            if (wards[ward] > maxCountForWard)
            {
                maxCountForWard = wards[ward];
                maxCountedWard = ward;
            }
        }

        cout << maxCountedWard << " " << maxCountForWard << endl;
    }

    // __________
    return 0;
}