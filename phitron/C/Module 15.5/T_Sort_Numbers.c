#include <stdio.h>
void abc(int num1, int num2, int num3)
{
    int temp;
    if (num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3)
    {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    printf("%d\n%d\n%d\n", num1, num2, num3);
}

void asd(int num1, int num2, int num3)
{
    printf("\n%d\n%d\n%d", num1, num2, num3);
}

int main()
{
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    abc(num1, num2, num3);
    asd(num1, num2, num3);
    return 0;
}