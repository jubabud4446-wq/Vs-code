// #include <stdio.h>
// int main() 
// {
//     int n;
//     int i;
//     int a[1000];
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//         if (a[i] >= 0)
//         {
//             a[i] = 1;
//         }
//         if (a[i] < 0)
//         {
//             a[i] = 2;
//         }   
//     }
//     printf("%d", a[i]);
//     return 0;
// }


#include <stdio.h>
int main() 
{
    int loop;
    scanf("%d", &loop);
    int array[1000];

    for (int i = 0; i < loop; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] > 0)
        {
            array[i] = 1;
        }
        if (array[i] < 0)
        {
            array[i] = 2;
        }
    }
    for (int i = 0; i < loop; i++)
    {
        printf("%d ", array[i]);
    }
    
    return 0;
}