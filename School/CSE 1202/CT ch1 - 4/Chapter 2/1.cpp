#include <bits/stdc++.h>
using namespace std;

class Timer
{
    int seconds;
    public:
    Timer();
    void add_time(int s)
    {
        seconds = s;
    }
    void show_time()
    {
        int temp = 0;
        int hr = 0, min = 0, sec = 0;
        hr = seconds / 3600;
        temp = seconds % 3600;
        min = temp / 60;
        temp = temp % 60;
        sec = temp;

        cout << hr << " hr, " << min << " min, " << sec << " sec" << endl;
    }
};

Timer::Timer()
{
    seconds = 0;
}

int main()
{
    Timer a1;

    int s;

    cout << "Enter seconds : ";
    cin >> s;

    a1.add_time(s);
    a1.show_time();
    return 0;
}