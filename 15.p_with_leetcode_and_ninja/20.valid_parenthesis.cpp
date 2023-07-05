// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']',
// determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;

        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                st.push(c);
            }

            else
            {
                if (st.empty())
                {
                    return false;
                }

                else
                {
                    if (c == ')' && st.top() == '(')
                    {
                        st.pop();
                    }
                    else if (c == '}' && st.top() == '{')
                    {
                        st.pop();
                    }
                    else if (c == ']' && st.top() == '[')
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        return st.empty();
    }
};

int main()
{
    Solution s;
    string st;
    cin >> st;

    bool b = s.isValid(st);

    if (b == 1)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    // __________
    return 0;
}