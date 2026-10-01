#include <stdio.h>
int main() 
{
    int n, nums, max = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &nums);
        if (nums > max)
        {
            max = nums;
        }
    }
    printf("%d", max);
    return 0;
}