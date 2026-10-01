#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        vector<int> Alice(3), Bob(3);

        for (int i = 0; i < 3; i++) cin >> Alice[i];
        for (int i = 0; i < 3; i++) cin >> Bob[i];

        sort(Alice.begin(), Alice.end(), greater<int>());
        sort(Bob.begin(), Bob.end(), greater<int>());

        int aliceScore = Alice[0]*100 + Alice[1]*10 + Alice[2];
        int bobScore = Bob[0]*100 + Bob[1]*10 + Bob[2];

        if (aliceScore > bobScore) cout << "Alice" << endl;
        else if (bobScore > aliceScore) cout << "Bob" << endl;
        else cout << "Tie" << endl;
    }

    return 0;
}