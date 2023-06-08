#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> cnn(26, 0);

    for (int i = 0; i < s.length(); i++)
    {
        int indx = s[i] - 'a';
        cnn[indx] += 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (cnn[i] > 0)
        {
            char c = i + 'a';
            cout << c << " : " << cnn[i] << endl;
        }
    }

    // __________
    return 0;
}