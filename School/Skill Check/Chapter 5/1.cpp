#include <bits/stdc++.h>
using namespace std;

class date
{
    int day, month, year;
    public:

    date(time_t t)
    {
        struct tm  *p;
        p = localtime(&t);
        day = p->tm_mday;
        month = p->tm_mon;
        year = p->tm_year;
    }

    void show()
    {
        cout << month << "/" << day << "/" << year;
    }
};

int main()
{
    cout << endl;

    date tdate(time(NULL));
    tdate.show();

    cout << endl;
    return 0;
}