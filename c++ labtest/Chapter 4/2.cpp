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
    void set_value(int index, int val)
    {
        arr[index] = val;
    }
    int get_value(int index)
    {
        return arr[index];
    }
};

int main()
{
    DynamicArray d;

    for(int i = 0; i < 5; i++)
    {
        d.set_value(i,(i+1)*10);
    }

    for(int i = 0; i < 5; i++)
    {
        cout << d.get_value(i) << " ";
    }

    return 0;
}