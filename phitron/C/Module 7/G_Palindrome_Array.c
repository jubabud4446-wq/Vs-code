// #include <stdio.h>
// int main() 
// {
//     int N, yes = 0;
//     scanf("%d", &N);
//     int arr[N];
//     for (int i = 0; i < N; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
    
//     for (int i = 0; i < N; i++)
//     {
//         if (arr[i] == arr[N - i - 1])
//             {
//                 yes = 1;
//             }
//             else
//             {
//                 yes = 0;
//             }
//     }
//     if (yes == 1)
//     {
//         printf("YES");
//     }
//     if (yes != 1)
//     {
//         printf("NO");
//     }
//     return 0;
// }

#include <stdio.h>
int main() 
{
    int N, yes = 1;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < N / 2; i++)
    {
        if (arr[i] != arr[N - i - 1])
        {
            yes = 0;
            break;
        }
    }

    if (yes == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
