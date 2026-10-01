#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, X, Y;
    cin >> A >> B >> X >> Y;

    int messi = A * 2 + B;
    int ronaldo = X * 2 + Y;

    if (messi > ronaldo) {
        cout << "Messi" << endl;
    } else if (ronaldo > messi) {
        cout << "Ronaldo" << endl;
    } else {
        cout << "Equal" << endl;
    }

    return 0;
}
