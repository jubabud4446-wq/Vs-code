#include <stdio.h>
int main() 
{
    int T, num, reminder;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%d", &num);

        if (num == 0) {
            printf("0\n");
            continue;
        }

        while (num != 0) 
        {
            reminder = num % 10;
            num = num / 10;
            printf("%d ", reminder);
        }
        printf("\n");
    }
    return 0;
}
