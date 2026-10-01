#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;
int main() {
    int startday, endday, starthour, startmin, startsec, endhour, endmin, endsec;
    cin >> startday;
    cin >> starthour >> startmin >> startsec;
    cin >> endday;
    cin >> endhour >> endmin >> endsec;
    int totalstartsec = (startday * 86400) + (starthour * 3600) + (startmin * 60) + startsec;
    int totalendsec = (endday * 86400) + (endhour * 3600) + (endmin * 60) + endsec;
    int totaldiff = totalendsec - totalstartsec;
    int diffday = totaldiff / 86400;
    totaldiff = totaldiff % 86400;
    int diffhour = totaldiff / 3600;
    totaldiff = totaldiff % 3600;
    int diffmin = totaldiff / 60;
    totaldiff = totaldiff % 60;
    int diffsec = totaldiff;
    cout << diffday << " dia(s)" << endl;
    cout << diffhour << " hora(s)" << endl;
    cout << diffmin << " minuto(s)" << endl;
    cout << diffsec << " segundo(s)" << endl;
    return 0;
}