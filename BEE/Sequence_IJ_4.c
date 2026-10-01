#include <stdio.h>
#include <math.h>

int main() {
    float i, j;

    for (i = 0; i <= 2.0 + 0.001; i += 0.2)
    {
        for (int loop = 0; loop < 3; loop++)
        {
            j = 1 + i + loop;

            if (fabs(i - (int)i) < 0.0001) 
                printf("I=%d ", (int)i);
            else
                printf("I=%.1f ", i);

            if (fabs(j - (int)j) < 0.0001)
                printf("J=%d\n", (int)j);
            else
                printf("J=%.1f\n", j);
        }
    }

    return 0;
}