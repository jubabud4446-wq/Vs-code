#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    int jersey_no;
    string country;

    Cricketer(string country, int jersey_no)
    {
        this->country = country;
        this->jersey_no = jersey_no;
    }
};

int main()
{
    Cricketer* dhoni = new Cricketer("bangladesh", 10);
    Cricketer* kohil = new Cricketer("bangladesh", 12);

    dhoni = kohil;

    cout << dhoni->jersey_no << endl;
    cout << kohil->jersey_no << endl;
    
    delete dhoni;
    delete kohil;
    
    return 0;
}