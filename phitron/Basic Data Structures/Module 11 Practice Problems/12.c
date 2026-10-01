#include <stdio.h>

int recursive_sum(int a[], int n)
{
    if(n == 0)
        return 0;
    return a[n - 1] + recursive_sum(a, n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int sum = recursive_sum(arr, n);
    printf("%d\n", sum);
    return 0;
}