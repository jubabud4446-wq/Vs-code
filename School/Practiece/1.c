#include <stdio.h>
int main()
{
    int on = 1;
    while(on)
    {
        printf("1. +\n2. -\n3. *\n4. /\n5. %%\n");
        int choice;
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 5)
        {
            int a, b;
            printf("Enter two numbers: ");   
            scanf("%d %d", &a, &b);
            switch(choice)
            {
                case 1:
                    printf("Result: %d\n", a + b);
                    break;
                case 2:
                    printf("Result: %d\n", a - b);
                    break;
                case 3:
                    printf("Result: %d\n", a * b);
                    break;
                case 4:
                    if(b == 0)
                    {
                        printf("Error: Division by zero!\n");
                        break;
                    }
                    printf("Result: %d\n", a / b);
                    break;
                case 5:
                    printf("Result: %d\n", a % b);
                    break;
                default:
                    printf("Invalid choice!\n");
            }

            printf("Do you want to continue? (1/0): ");
            scanf("%d", &on);
        }
        else
        {
            printf("Invalid choice! Please select a valid operation.\n");
        }    
    }
    return 0;
}