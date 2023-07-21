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

        map<string, int> words;

        stringstream ss(aLine);
        string word;

        string maxCountedWord;
        int maxCountForWord = 0;

        while (ss >> word)
        {
            words[word]++;
        }

        // cout << endl;
        cout << maxCountedWord << " " << maxCountForWord << endl;
    }

    // _____
    return 0;
}