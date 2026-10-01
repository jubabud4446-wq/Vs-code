#include <bits/stdc++.h>
using namespace std;

class Item
{
    double price;
    public:
    void set_price(double p)
    {
        price = p;
    }
    void display()
    {
        cout << "Prise = " << price << endl;
    }
};

int main()
{
    Item *ptr = new Item;

    ptr->set_price(99.99);
    ptr->display();

    delete ptr;
    
    return 0;
}