#include <stdio.h>
int main() 
{
    int correctpass = 1999, password;
    for (int i = 1; i >= 0; i++)
    {
        scanf("%d", &password);
        if (password != correctpass)
        {
            printf("Wrong\n");
        }
        else
        {
            printf("Correct\n");
            break;
        }
    }
    return 0;
}