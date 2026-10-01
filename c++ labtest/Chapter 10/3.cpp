#include <bits/stdc++.h>
using namespace std;

class Appliance
{
    public:
    virtual int power_consumption() = 0;
};

class Fan : public Appliance
{
    public:
    int power_consumption()
    {
        return 50;
    }
};

class Heater : public Appliance
{
    public:
    int power_consumption()
    {
        return 1500;
    }
};

int main()
{
    Appliance *ptr;

    Fan f;
    Heater h;

    ptr = &f;
    cout << ptr->power_consumption() << endl;

    ptr = &h;
    cout << ptr->power_consumption() << endl;
    
    return 0;
}