#include <stdio.h>
int main() 
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int palindrome = 1;
    for (int i = 0, j = n - 1; i < j ; i++, j--)
    {
        if (a[i] != a[j])
        {
            palindrome = 0;
            break;
        }
    }
    
    if (palindrome == 0)
    printf("NO");
    else
    printf("YES");
    return 0;
}