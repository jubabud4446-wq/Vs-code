#include <stdio.h>
int main() {
    
    int a, b, area;
    printf("Enter base and height of triangle: ");
    scanf("%d %d", &a, &b);
    area = .5 * a * b;
    printf("Area of triangle: %d", area);
    
    return 0;
}