#include <stdio.h>
int main() 
{
    int num, loop = 6;
    scanf("%d", &num);
    
    while (loop > 0)
    {
        if (num % 2 != 0)
        {
            printf("%d\n", num);
            loop --;
        }
        num ++;
    }
    
    return 0;
}