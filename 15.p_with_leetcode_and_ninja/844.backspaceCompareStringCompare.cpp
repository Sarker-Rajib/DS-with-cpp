// Given two strings s and t, return true if they are equal when both are typed into empty text editors.
// '#' means a backspace character.

// Note that after backspacing an empty text, the text will continue empty.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> A, B;

        for (char c : s)
        {
            if (c == '#')
            {
                if (!A.empty())
                {
                    A.pop();
                }
                else
                {
                    A.push(c);
                }
            }
        }

        for (char d : t)
        {
            if (d == '#')
            {
                if (!B.empty())
                {
                    B.pop();
                }
                else
                {
                    B.push(d);
                }
            }
        }

        return A == B;
    }
};

int main()
{
    Solution a;
    string s, t;
    cin >> s >> t;

    bool cc = a.backspaceCompare(s, t);

    cc == 1 ? cout << "true" : cout << "false";

    //_____
    return 0;
}