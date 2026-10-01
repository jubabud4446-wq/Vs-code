#include <stdio.h>
int main() 
{
    float p, x;
    scanf("%f %f", &x, &p);
    printf("%.2f", (p*100)/(100-x));
    return 0;
}