// #include <stdio.h>

// int main() 
// {
//     int num, original, digit, sum = 0, fact;
//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     original = num;

//     while (num != 0)
//     {
//         digit = num % 10;
//         fact = 1;

//         for (int i = 1; i <= digit; i++)
//         {
//             fact *= i;
//         }

//         sum += fact;
//         num /= 10;
//     }

//     if (sum == original)
//         printf("%d is a Strong Number\n", original);
//     else
//         printf("%d is not a Strong Number\n", original);

//     return 0;
// }
#include <stdio.h>
int main() 
{
    int num, i, sum = 0, fact;
    printf("Enter an integer: ");
    scanf("%d", &num);
    for ( i = 0; i <= num; i++)
    {
        fact = fact * i;
        sum = sum + fact;
    }
    if (sum == num)
        printf("%d is a Strong Number\n", num);
    else
        printf("%d is not a Strong Number\n", num);
    return 0;
}