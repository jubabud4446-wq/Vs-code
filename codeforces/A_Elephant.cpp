#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int i = 5, ans = 0;

    while(i > 0)
    {
        if(n/i)
        {
            ans += n/i;
            n = n%i;
        }

        else
            i--;
        
    }

    cout << ans << endl;
    
    return 0;
}