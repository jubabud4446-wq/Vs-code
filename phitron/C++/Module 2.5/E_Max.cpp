#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    
    int max_value;
    cin >> arr[0];
    max_value = arr[0];
    
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        max_value = max(max_value, arr[i]);
    }
    
    cout << max_value;
    return 0;
}









// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];

//     cin >> arr[0];
//     int max = arr[0];

//     for (int i = 1; i < n; i++)
//     {
//         cin >> arr[i];
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
    
//     cout << max;
//     return 0;
// }