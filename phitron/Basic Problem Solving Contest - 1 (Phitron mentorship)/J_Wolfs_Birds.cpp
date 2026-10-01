#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        
        string S;
        cin >> S;

        int safe = 0;

        for (int i = 0; i < N; i++)
        {
            if (S[i] == '0')
            {
                bool haswolf = false;
                for (int j = 0; j < i; j++)
                {
                    if (S[j] == '1')
                    {
                        haswolf = true;
                        break;
                    }
                }
                
                if (!haswolf)
                {
                    safe++;
                }
            }
        }

        cout << safe << endl;
    }

    return 0;
}