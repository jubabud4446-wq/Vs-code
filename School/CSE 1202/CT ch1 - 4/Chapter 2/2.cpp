#include <bits/stdc++.h>
using namespace std;

class Box
{
    double length, width, height;
    public:
    Box(int a, int b, int c)
    {
        length = a;
        width = b;
        height = c;
    }

    void show_volume()
    {
        int volume = length*width*height;
        cout << "Volume = " << volume << endl;
    } 
};

int main()
{
    int l, w, h;
    cout << "Length = ";
    cin >> l;
    cout << "Width = ";
    cin >> w;
    cout << "Height = ";
    cin >> h;

    Box no1(l, w, h);
    no1.show_volume();
    
    return 0;
}