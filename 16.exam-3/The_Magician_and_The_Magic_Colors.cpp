#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int ct;
        cin >> ct;

        stack<char> cStore;
        stack<char> color;

        for (int i = 0; i < ct; i++)
        {
            char c;
            cin >> c;

            if (!cStore.empty())
            {
                if (cStore.top() == c)
                {
                    cStore.pop();
                }

                else if (cStore.top() == 'B' && c == 'R')
                {
                    if (!color.empty())
                    {
                        if (color.top() == 'P')
                        {
                            color.pop();
                        }
                        else
                        {
                            color.push('P');
                        }
                    }
                    else
                    {
                        color.push('P');
                    }

                    cStore.pop();
                }

                else if (cStore.top() == 'R' && c == 'B')
                {
                    if (!color.empty())
                    {
                        if (color.top() == 'P')
                        {
                            color.pop();
                        }
                        else
                        {
                            color.push('P');
                        }
                    }
                    else
                    {
                        color.push('P');
                    }
                    cStore.pop();
                }

                else if (cStore.top() == 'R' && c == 'G')
                {
                    if (!color.empty())
                    {
                        if (color.top() == 'Y')
                        {
                            color.pop();
                        }
                        else
                        {
                            color.push('Y');
                        }
                    }
                    else
                    {
                        color.push('Y');
                    }
                    cStore.pop();
                }

                else if (cStore.top() == 'G' && c == 'R')
                {
                    if (!color.empty())
                    {
                        if (color.top() == 'Y')
                        {
                            color.pop();
                        }
                        else
                        {
                            color.push('Y');
                        }
                    }
                    else
                    {
                        color.push('Y');
                    }
                    cStore.pop();
                }

                else if (cStore.top() == 'G' && c == 'B')
                {
                    if (!color.empty())
                    {
                        if (color.top() == 'C')
                        {
                            color.pop();
                        }
                        else
                        {
                            color.push('C');
                        }
                    }
                    else
                    {
                        color.push('C');
                    }
                    cStore.pop();
                }

                else if (cStore.top() == 'B' && c == 'G')
                {
                    if (!color.empty())
                    {
                        if (color.top() == 'C')
                        {
                            color.pop();
                        }
                        else
                        {
                            color.push('C');
                        }
                    }
                    else
                    {
                        color.push('C');
                    }
                    cStore.pop();
                }
            }
            else
            {
                cStore.push(c);
            }
        }

        if (!cStore.empty())
        {
            color.push(cStore.top());
        }

        stack<char> output;

        while (!color.empty())
        {
            output.push(color.top());
            color.pop();
        }

        while (!output.empty())
        {
            cout << output.top();
            output.pop();
        }
        cout << endl;
    }

    // __________
    return 0;
}