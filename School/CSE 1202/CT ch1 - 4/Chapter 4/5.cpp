#include <bits/stdc++.h>
using namespace std;

class Vector_3D
{
    int x, y, z;
    public:
    void set(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void display()
    {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl; 
    }
    void add(Vector_3D &v)
    {
        x += v.x;
        y += v.y;
        z += v.z;
    }
};

int main()
{
    Vector_3D v1, v2;

    v1.set(1, 2, 3);
    v2.set(4, 5, 6);

    v1.add(v2);

    v1.display();
    
    return 0;
}