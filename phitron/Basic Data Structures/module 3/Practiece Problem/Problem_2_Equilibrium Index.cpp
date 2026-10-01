#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int leftSum = 0, rightSum = 0, temp = 0;
    
    for (int i = 0; i < n; i++)
    {  
        rightSum = temp;
        temp = 0; 
        leftSum += nums[i];
        if (leftSum == rightSum)
        {
            cout << i << endl;
            return 0;
        }
        for (int j = n - 1; j > i; j--)
        {
            temp += nums[j];
            if (leftSum == rightSum)
            {
                cout << i << endl;
                return 0;
            }
        }
    }

    cout << "No Equilibrium Index Exists" << endl;

    return 0;
}