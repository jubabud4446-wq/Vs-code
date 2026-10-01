#include <bits/stdc++.h>
using namespace std;

class InputValidator
{
    public:
    void check_positive(int n)
    {
        if(n < 0)
            throw n;
        
        cout << "Positive number" << endl;
    }
};

int main()
{
    InputValidator o1;

    try
    {
        o1.check_positive(-5);
    }
    catch(int error)
    {
        cout << "Error: " << error << endl;
    }
    
    return 0;
}