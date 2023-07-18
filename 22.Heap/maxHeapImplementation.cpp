#include <bits/stdc++.h>
using namespace std;

class MaxHeap
{
public:
    vector<int> v;
    MaxHeap(){};

    void up_heapify(int idx)
    {
        while (0 < idx && v[idx] > v[(idx - 1) / 2])
        {
            swap(v[idx], v[(idx - 1) / 2]);
            idx = (idx - 1) / 2;
        }
    };

    void push(int val)
    {
        v.push_back(val);
        up_heapify(v.size() - 1);
    }

    void deleteVal(int idx)
    {
        swap(v[idx], v[v.size() - 1]);
        v.pop_back();
        downHeapify(idx);
    }

    void downHeapify(int idx)
    {
        while (true)
        {
            int largest = idx;
            int l = 2 * idx + 1;
            int r = 2 * idx + 2;

            if (l < v.size() && v[largest] < v[l])
            {
                largest = l;
            }

            if (r < v.size() && v[largest] < v[r])
            {
                largest = r;
            }

            if (largest == idx)
            {
                break;
            }

            swap(v[idx], v[largest]);
            idx = largest;
        }
    }

    void printHeap()
    {
        for (int val : v)
        {
            cout << val << " ";
        }
    };

    int getMax()
    {
        return v[0];
    }

    void buildHeapFromTree(vector<int> &arr)
    {
        v = arr;
        int n = v.size();
        int lastNonLeafNode = n / 2 - 1;

        for (int i = lastNonLeafNode; i <= 0; i--)
        {
            downHeapify(i);
        }
    }
};

int main()
{
    MaxHeap mx;
    mx.push(1);
    mx.push(2);
    mx.push(3);
    mx.push(4);
    mx.push(5);

    mx.printHeap();
    // cout << mx.getMax();

    mx.deleteVal(0);
    // cout << mx.getMax();

    // mx.printHeap();

    // __________
    return 0;
}