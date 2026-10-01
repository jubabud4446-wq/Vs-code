#include <bits/stdc++.h>
using namespace std;

class Compare
{
    public:
    double find_min(double a, double b)
    {
        if(a < b)
            return a;
        else
            return b;
    }

    double find_min(double arr[5])
    {
        double min = arr[0];

        for(int i = 0; i<5; i++)
        {
            if(arr[i] < min)
                min = arr[i];
        }
        return min;
    }
};

int main()
{
    Compare c;

    cout << "Minimum = " << c.find_min(12.5, 7.8) << endl;

    double arr[5] = {9.5, 4.2, 8.1, 2.7, 6.0};

    cout << "Minimum in array = " << c.find_min(arr) << endl;

    return 0;
}