#include <bits/stdc++.h>
using namespace std;

class aray
{
    int *p;
    int size;
    public:
    aray(int sz)
    {
        p = new int [sz]; // What does it do ?
        if(!p)
            exit(1);
        size = sz;
        cout << "Using normal constructor\n";
    }
    ~aray()
    {
        delete []p;
    }
    // copy constructor;
    aray(const aray &a);

    void put(int i, int j)
    {
        if(i>=0 && i<size)
            p[i] = j;
    }
    int get(int i)
    {
        return p[i];
    }
};

aray::aray(const aray &a)
{
    size = a.size;
    p = new int [a.size];
    if(!p)
        exit(1);
    for(int i = 0; i<a.size; i++)
        p[i] = a.p[i];
    cout << "Using copy constructor\n";
}

int main()
{
    aray num(10);
    int i;

    for(i=0; i<10; i++)
        num.put(i,i);
    
    for(i=9; i>=0; i--)
        cout << num.get(i) << " ";
    
    cout << "\n";

    aray x = num;
    for(i=9; i>=0; i--)
        cout << num.get(i) << " ";
    
    return 0;
}