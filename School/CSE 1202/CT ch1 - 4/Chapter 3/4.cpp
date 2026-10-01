#include <bits/stdc++.h>
using namespace std;

class Item
{
    double price;

    public:
    void setPrice(double p) {price = p;}
    void display() {cout << "Price = " << price << endl;}
};

int main()
{
    Item* ptr = new Item;

    ptr->setPrice(10.23);
    ptr->display();

    delete ptr;
    
    return 0;
}