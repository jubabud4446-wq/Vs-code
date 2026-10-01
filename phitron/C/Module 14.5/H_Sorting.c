    #include <stdio.h>
    int swap(int *num1, int *num2)
    {
        int temp = 0;
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
    int main()
    {
        int n;
        scanf("%d", &n);
        int a[n];

        //Input
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        //Checking and Swapping
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    swap(&a[i], &a[j]);
                }
            }
        }
        
        //Output
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        
        return 0;
    }