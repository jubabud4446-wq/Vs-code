#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    
    int left = 0;
    int right = N - 1;
    bool isPalindrome = true;
    
    while (left < right)
    {
        if (A[left] != A[right])
        {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
    
    if (isPalindrome)
    {
        cout << "YES" << endl;
    } else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}