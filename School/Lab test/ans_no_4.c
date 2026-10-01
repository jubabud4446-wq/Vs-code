#include <stdio.h>

int main()
{
    int n;
    scanf ("%d", &n);


    
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf ("%d", &a[i][j]);
        }
    }



    int b[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf ("%d", &b[i][j]);
        }
    }



    int c[n][n];
    int is = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            if (i == j && c[i][j] == 1)
            {
                is = 1;
            }
            else if (i != j && c[i][j] == 0)
            {
                is = 1;
            }
            else
            {
                is = 0;
                break;
            }
        }

        if (is == 0)
        {
            break;
        }
    }



    if (is == 1)
    {
        printf ("Identity Maxrix");
    }
    else
    {
        printf ("Not Identity Matrix");
    }
    
    
    
    return 0;
}
/*
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char no_1[10001], no_2[10001];

    fgets(no_1, sizeof(no_1), stdin);
    fgets(no_2, sizeof(no_2), stdin);

    int mat_a[100][100], mat_b[100][100], mat_c[100][100];
    int num_a = 0;
    int num_b = 0;
    int sign_a;
    int sign_b;

    char d_1 = ' ';
    strtok(no_1, d_1);

    //setting the numbers into the matrix






    if (num_a != num_b)
    {
        printf ("Not Idnetity Matrix");
    }
    
    // int size_no_1 = sizeof(no_1);
    // int size_no_2 = sizeof(no_2);

    // if (size_no_1 != size_no_2)
    // {
    //     printf ("Not Identity Matrix");
    //     return 0;
    // }
    
    // int n = sqrt(size_no_1);

    // int mat_a[n][n];
    // int mat_b[n][n];
    // int mat_c[n][n];

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         mat_a[i][j] = no_1[j];
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         mat_b[i][j] = no_2[j];
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         mat_c[i][j] = mat_a[i][j] + mat_b[i][j];
    //     }
    // }
    
    // int is_Identity = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i == j && mat_c[i][j] != 1)
    //         {
    //             is_Identity = 0;
    //             break;
    //         }
    //         else if (i != j && mat_c[i][j] != 0)
    //         {
    //             is_Identity = 0;
    //             break;
    //         }
    //         else
    //         {
    //             is_Identity = 1;
    //         }
    //     }
    //     break;
    // }
    
    // if (is_Identity == 1)
    // {
    //     printf ("Identity Matrix");
    // }

    // else
    // {
    //     printf ("Not Identity Matrix");
    // }
    
    return 0;
}*/