#include <bits/stdc++.h>
using namespace std;

class DynamicArray
{
    int *arr;
    public:
    DynamicArray()
    {
        arr = new int[5];
    }
    ~DynamicArray()
    {
        delete[] arr;
    }
    void setValue(int index, int value)
    {
        arr[index] = value;
    }
    int getValue(int index)
    {
        return arr[index];
    }
};


int main()
{
    DynamicArray d;
    for(int i = 0; i < 5; i++)
    {
        int a;
        cin >> a;
        d.setValue(i, a);
    }

    for(int i = 0; i < 5; i++)
        cout << d.getValue(i) << " ";
    return 0;
}