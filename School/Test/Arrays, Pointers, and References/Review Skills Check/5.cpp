/*

Given the following class, create a function called make_sum() that returns an object of
type summation. Have this function prompt the user for a number and then construct
an object having this value and return it to the calling procedure. Demonstrate that the
function works.
class summation
{
    int num;
    long sum;

    public :
        void set_sum(int n);
        void show_sum()
        {
            cout << num << "Sum is " << sum << endl;
        }
};

void summation::set_sum(int n)
{
    int i;
    num = n;

    sum = 0;
    for(i = 1; i < n; i++)
        sum += i;
}

*/

#include <bits/stdc++.h>
using namespace std;


class summation
{
    int num;
    long sum;

    public :
        void set_sum(int n);
        void show_sum()
        {
            cout << num << "Sum is " << sum << endl;
        }
};

summation make_sum()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    summation s;
    s.set_sum(n);
    return s;
}

void summation::set_sum(int n)
{
    int i;
    num = n;

    sum = 0;
    for(i = 1; i < n; i++)
        sum += i;
}

int main()
{
    summation s = make_sum();
    s.show_sum();
    return 0;
}