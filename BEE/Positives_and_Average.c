#include <stdio.h>
int main() 
{
    int pcount = 0;
    float x, sum = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &x);
        if (x >= 0)
        {
            pcount++;
            sum += x;
        }
    }

    printf("%d valores positivos\n", pcount);
    printf("%.1f\n", sum / pcount);

    return 0;
}


// #include <stdio.h>
// int main() 
// {
//     int n = 6, pcount = 0;
//     float a[n], sum = 0, avg = 0;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%f", &a[i]);
//         if (a[i] >= 0)
//         {
//             pcount ++;
//             sum += a[i];
//         }
//     }

//     avg = sum / pcount;

//     printf("%d valores positivos\n", pcount);
//     printf("%.1f", avg);

//     return 0;
// }