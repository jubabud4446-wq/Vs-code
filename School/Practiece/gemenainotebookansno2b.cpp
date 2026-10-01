#include <bits/stdc++.h>
using namespace std;

class Vector3d{
    double x, y, z;
    public:
    Vector3d(double x, double y, double z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    Vector3d(const Vector3d& o)
    {
        x = o.x;
        y = o.y;
        z = o.z;
    }
    Vector3d operator++()
    {
        ++x;
        ++y;
        ++z;

        return *this;
    }
    friend Vector3d operator*(double scaller, Vector3d v);
    void display()
    {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }
};

Vector3d operator*(double scaller, Vector3d v)
{
    return Vector3d(
        scaller*v.x,
        scaller*v.y,
        scaller*v.z

    );

    // v.x *= scaller;
    // v.y *= scaller;
    // v.z *= scaller;

    // return v;
}

int main()
{
    Vector3d v1(1.0, 2.0, 3.0);
    Vector3d v2 = v1;

    ++v1;

    Vector3d v3 = 2*v1;

    cout << "v1: ";
    v1.display();

    cout << "v2: ";
    v2.display();

    cout << "v3: ";
    v3.display();
    
    return 0;
}