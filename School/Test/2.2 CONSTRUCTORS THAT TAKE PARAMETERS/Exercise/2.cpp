#include <iostream>
#include <ctime>
using namespace std;

class tandd
{
    time_t currentTime;
    tm *localTime;

public:
    // Constructor receives system time
    tandd(time_t t)
    {
        currentTime = t;
        localTime = localtime(&currentTime);
    }

    // Display function
    void show()
    {
        cout << "Date: "
             << localTime->tm_mday << "/"
             << localTime->tm_mon + 1 << "/"
             << localTime->tm_year + 1900 << endl;

        cout << "Time: "
             << localTime->tm_hour << ":"
             << localTime->tm_min << ":"
             << localTime->tm_sec << endl;
    }
};

int main()
{
    time_t now;

    time(&now);        // get current system time

    tandd obj(now);    // pass time to constructor

    obj.show();

    return 0;
}