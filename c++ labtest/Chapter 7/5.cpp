#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
    protected:
    int wheels;
    public:
};

class Car:public Vehicle
{
    protected:
    int passenger;
    public:
};

class Truck:public Car
{
    private:
    double cargo_weight;
    public:
    void set_info(int w, int p, double c_w)
    {
        wheels = w;
        passenger = p;
        cargo_weight = c_w;
    }
    void show_info()
    {
        cout << "Wheels = " << wheels << endl;
        cout << "Passenger = " << passenger << endl;
        cout << "Cargo weight = " << cargo_weight << endl;
    }
};

int main()
{
    Truck t;
    t.set_info(8, 2, 1000);
    t.show_info();
    
    return 0;
}