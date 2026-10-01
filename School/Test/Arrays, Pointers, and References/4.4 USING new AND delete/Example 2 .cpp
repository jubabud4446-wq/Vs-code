#include <bits/stdc++.h>
using namespace std;

class Samp
{
    int i, j;
    public:
        void set(int a, int b)
        {
            i = a;
            j = b;
        }

        int get_product()
        {
            return i*j;
        }
};

int main()
{
    Samp *p;

    p = new Samp;
    if(!p)
    {
        cout << "Allocation error" << endl;
        return 1;
    }

    p->set(10, 20);
    cout << "The product is: " << p->get_product() << endl;

    delete p;
    
    return 0;
}