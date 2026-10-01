#include <stdio.h>
#include <string.h>
int main() 
{
    char x[21], y[21];
    scanf("%s", x);
    scanf("%s", y);

    if (strcmp(x, y) == 1) 
    {   
        printf("%s", y); 
    }

    else if (strcmp(x, y) == -1)
    {
        printf("%s", x);
    }
    
    else 
    {
        printf("%s", x);
    }
  
    return 0;
}