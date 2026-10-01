#include <stdio.h>

class Solution
{
    public:

};


void print_ascending_sort(int a[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    
    for(int i = 0; i < size; i++)
        printf("%d\n", a[i]);
}

int main()
{
    int a[3];
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    print_ascending_sort(a, 3);
    printf("\n%d\n%d\n%d\n", a[0], a[1], a[2]);
    return 0;
}