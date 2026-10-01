#include <stdio.h>
int main()
{
    int i=1, j=60;

    for ( ; j >= 0; j-=5, i+=3)
    {
        printf("I=%d ", i);
        printf("J=%d\n", j);
    }
    
    return 0;
}