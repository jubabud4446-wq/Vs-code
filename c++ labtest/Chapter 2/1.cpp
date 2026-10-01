#include <bits/stdc++.h>
using namespace std;

class Time
{
    int sec;
    public:
    Time()
    {
        sec = 0;
    }
    void add_time(int s)
    {
        sec = s;
    }
    void show()
    {
        int s, m, h;
        h = sec / 3600;
        m = (sec % 3600) / 60;
        s = sec % 60;

        cout << h << " . " << m << " . " << s << endl;
    }
};

int main()
{
    int seconds;
    cout << "Enter seconds: ";
    cin >> seconds;

    Time o1;
    o1.add_time(seconds);
    o1.show();

    return 0;
}