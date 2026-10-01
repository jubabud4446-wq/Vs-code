#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, D, x, y;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = b*b - 4*a*c;

    if (D > 0) {
        x = (-b + sqrt(D)) / (2*a);
        y = (-b - sqrt(D)) / (2*a);
        printf("Roots are real and distinct: %.2f and %.2f\n", x, y);
    }
    else if (D == 0) {
        x = -b / (2*a);
        printf("Roots are real and equal: %.2f and %.2f\n", x, x);
    }
    else {
        float real = -b / (2*a);
        float imag = sqrt(-D) / (2*a);
        printf("Roots are complex: %.2f + %.2fi and %.2f - %.2fi\n", real, imag, real, imag);
    }

    return 0;
}
