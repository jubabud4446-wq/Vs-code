#include <stdio.h>
int main() 
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int mini = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }    
    }

    int minicount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == mini)
        {
            minicount++;
        }
    }

    if (minicount % 2 != 0)
    {
        printf("Lucky\n");
    }
    
    else
    {
        printf("Unlucky\n");
    }

    return 0;
}
