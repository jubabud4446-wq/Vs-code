#include <bits/stdc++.h>
using namespace std;

class Temperature
{
    double celsius;
public:
    void set_celsius(double c)
    {
        celsius = c;
    }
    double get_fahrenheit()
    {
        return (celsius * 9 / 5) + 32;
    }
};

int main()
{
    Temperature temp;
    int celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    temp.set_celsius(celsius);
    cout << "Fahrenheit: " << temp.get_fahrenheit() << endl;

    return 0;
}