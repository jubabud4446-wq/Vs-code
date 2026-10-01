#include <stdio.h>
#include <stdbool.h>

int main() 
{
    int sum = 1;
    int current = 1;
    int diff = 3;

    for (int i = 2; i <= 9; i++)
    {
        current += diff;
        sum += current;
        diff += 2;
    }

    printf("Sum = %d\n", sum);
    return 0;
}

// #include <stdio.h>

// int main() 
// {
//     int sum = 0;

//     for (int i = 1; i <= 9; i++)
//     {
//         sum += i * i;
//     }

//     printf("Sum = %d\n", sum);

//     return 0;
// }