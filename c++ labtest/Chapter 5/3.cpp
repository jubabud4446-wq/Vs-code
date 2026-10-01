#include <bits/stdc++.h>
using namespace std;

class Storage
{
    int *arr;
    public:
    Storage()
    {
        arr= new int[10];

        for(int i = 0; i < 10; i++)
        {
            arr[i] = i+1;
        }
    }
    Storage(const Storage &s)
    {
        arr = new int[10];

        for(int i = 0; i < 10; i++)
        {
            arr[i] = s.arr[i];
        }
    }
    void show()
    {
        for(int i = 0; i < 10; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    ~Storage()
    {
        delete[] arr;
    }
};

int main()
{
    Storage s1;
    Storage s2 = s1;

    cout << "Normal Constructor: ";
    s1.show();

    cout << "Copy Constructor: ";
    s2.show();

    return 0;
}