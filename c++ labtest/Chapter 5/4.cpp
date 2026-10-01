#include <iostream>
using namespace std;

class Power
{
private:
    int result;

public:
    void compute(int base, int exponent = 2)
    {
        result = 1;

        for (int i = 0; i < exponent; i++)
            result *= base;
    }

    void display()
    {
        cout << "Result = " << result << endl;
    }
};

int main()
{
    Power p1, p2;

    p1.compute(5);
    p2.compute(2, 5);

    p1.display();
    p2.display();

    return 0;
}