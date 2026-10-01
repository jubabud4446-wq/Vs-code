#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int x, ans; cin >> ans;
        int best = abs(ans - 100);

        for(int i = 1; i < n; i++){
            cin >> x;
            int d = abs(x - 100);
            if(d < best) best = d, ans = x;
        }
        cout << ans << "\n";
    }
}
