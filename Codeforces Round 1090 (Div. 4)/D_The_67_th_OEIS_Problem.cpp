#include <bits/stdc++.h>
using namespace std;

void fun(int n)
{
    vector<long long> primes;

    for (long long num = 2; primes.size() < n + 1; num++)
    {
        bool isPrime = true;

        for (long long p : primes)
        {
            if (p * p > num)
                break;

            if (num % p == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            primes.push_back(num);
    }

    vector<long long> result;

    for(int i = 0; i < n; i++)
        result.push_back(primes[i] * primes[i+1]);

    for(long long i : result)
        cout << i << " ";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        fun(n);
        cout << '\n';
    }

    return 0;
}