#include <bits/stdc++.h>
using namespace std;

class Divisor
{
    public:
    double divide(double numerator, double denominator)
    {
        if(denominator == 0)
            throw denominator;
        
        return numerator / denominator;
    }
};

int main()
{
    Divisor d;

    try
    {
        d.divide(20,0);
    }
    catch(double error_val)
    {
        cout << "Error. (Denominator = " << error_val << ")"<< endl;
    }
    
    return 0;
}