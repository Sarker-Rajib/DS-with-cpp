#include <bits/stdc++.h>
using namespace std;

void insertHeap(vector<int> &v, int x)
{
    v.push_back(x);
    int currentIndex = v.size() - 1;
    // cout << currentIndex;

    while (currentIndex != 0)
    {
        int parentIndex = (currentIndex - 1) / 2;
        if (v[parentIndex] < v[currentIndex])
        {
            swap(v[parentIndex], v[currentIndex]);
        }
        else
        {
            break;
        }

        currentIndex = parentIndex;
    }
}

void deleteVAl(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();

    int cur = 0;
    while (true)
    {
        int LIdx = cur * 2 + 1;
        int RIdx = cur * 2 + 2;
        int lastIdx = v.size() - 1;

        if (LIdx <= lastIdx && RIdx <= lastIdx)
        {
            if (v[LIdx] >= v[RIdx] && v[LIdx] > v[cur])
            {
                swap(v[LIdx], v[cur]);
                cur = LIdx;
            }
            else if (v[LIdx] >= v[RIdx] && v[RIdx] > v[cur])
            {
                swap(v[RIdx], v[cur]);
                cur = RIdx;
            }
            else
            {
                break;
            }
        }
        else if (LIdx <= lastIdx)
        {
            if (v[LIdx] > v[cur])
            {
                swap(v[LIdx], v[cur]);
                cur = LIdx;
            }
            else
            {
                break;
            }
        }
        else if (RIdx <= lastIdx)
        {
            if (v[RIdx] > v[cur])
            {
                swap(v[RIdx], v[cur]);
                cur = RIdx;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insertHeap(v, x);
    }

    deleteVAl(v);
    deleteVAl(v);

    for (int val : v)
    {
        cout << val << " ";
    }

    // _____
    return 0;
}