#include <stdio.h>
#include <string.h>

union demo
{   
    int a;
    float b;
};

int main()
{
    union demo d;
    d.b = 20.5;
    d.a = 1032;
    printf("a = %d\n", d.a);
    printf("b = %f\n", d.b);
    return 0;
}