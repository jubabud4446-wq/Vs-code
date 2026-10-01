#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        double x;
        scanf("%lf", &x);
        
        int days = 0;
        while (x > 1.0)
        {
            x /= 2.0;
            days++;
        }
        
        printf("%d days\n", days);
    }
    
    return 0;
}