#include <stdio.h>
int main()
{
    int i=1, j=7, temp=0;
    for (; i <= 9; i+=2)
    {
        temp = j;
        for (int loop = 0; loop < 3; loop++,j--)
        {
        printf("I=%d ", i);
        printf("J=%d\n", j);
        }
        j += 5;
    }
    
    return 0;
}