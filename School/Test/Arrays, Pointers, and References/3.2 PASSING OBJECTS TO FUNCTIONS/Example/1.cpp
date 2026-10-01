#include <bits/stdc++.h>
using namespace std;

class samp
{
    int i;
    public :
        samp(int n){i = n;}
        int get_i(){return i;}   
};

int sqr_it(samp s)
{
    return s.get_i() * s.get_i();
}


int main()
{
    samp s1(5), s2(10);
    cout << sqr_it(s1) << endl;
    cout << sqr_it(s2) << endl;
    return 0;
}