// #include <stdio.h>
// void swap(int *x, int *y)
// {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
    
//     swap(&arr[2], &arr[3]);

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }

#include <stdio.h>
int main()
{
    for (int i = 3; i >= 1; i--)
    {
        for (int j = 1; j <= i ; j++)
        {
            printf("*");
        }
        printf(" ");
    }
    
    return 0;
}