#include <stdio.h>
#include <stdlib.h> // for abs
int main() {
    int num, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    num = abs(num); // for negative numbers

        while (num > 9) {
            temp = num %10;
            num = num / 10;
            num = num + temp;
        }
    printf("Generic root is: %d", num);    
    return 0;   
}