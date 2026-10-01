#include <stdio.h>

int main() {
    float minor = 4.0, major = 6.0;
    float pi = 3.1416, area;

    area = pi * (minor / 2) * (major / 2);

    printf("Area of the ellipse = %.2f sq.cm\n", area);

    return 0;
}
