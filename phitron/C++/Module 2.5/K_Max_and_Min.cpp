#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    int max_num = max(a, max(b, c));
    int min_num = min(a, min(b, c));
    
    cout << min_num << " " << max_num << endl;
    return 0;
}