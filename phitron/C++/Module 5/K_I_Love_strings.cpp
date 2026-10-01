#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int t = 0; t < n; t++) {
        string a, b, c;
        cin >> a >> b;
        
        int lena = a.length();
        int lenb = b.length();
        
        int i;
        for (i = 0; i < lena && i < lenb; i++) {
            c += a[i];
            c += b[i];
        }

        while (i < lena) c += a[i++];
        while (i < lenb) c += b[i++];

        cout << c << endl;
    }

    return 0;
}