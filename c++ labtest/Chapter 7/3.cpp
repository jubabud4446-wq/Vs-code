#include <bits/stdc++.h>
using namespace std;

class Device
{
    protected:
    double voltage;
    public:
    Device(double v)
    {
        voltage = v;
    }

};

class Sensor : public Device
{
    public:
    Sensor() : Device(220.0)
    {
    }

    void show()
    {
        cout << "Voltage = " << voltage << "v" << endl;
    }
};

int main()
{
    Sensor s;

    s.show();
    
    return 0;
}