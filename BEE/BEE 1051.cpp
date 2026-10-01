#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a;
    cin >> a;

    cout << fixed << setprecision(2);

    if (a <= 2000) {
        cout << "Isento" << endl;
    } 
    else if (a <= 3000) {
        cout << "R$ " << (a - 2000) * 0.08 << endl;
    } 
    else if (a <= 4500) {
        cout << "R$ " << (a - 3000) * 0.18 + 1000 * 0.08 << endl;
    } 
    else {
        cout << "R$ " << (a - 4500) * 0.28 + 1500 * 0.18 + 1000 * 0.08 << endl;
    }

    return 0;
}
