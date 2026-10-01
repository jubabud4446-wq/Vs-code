#include <stdio.h>
void cube(int num)
    {
        int cube;
        cube = num * num * num;
        printf("%d", cube);
    }

int main()
{
    int num;
    scanf("%d", &num);
    cube(num);
    return 0;
}