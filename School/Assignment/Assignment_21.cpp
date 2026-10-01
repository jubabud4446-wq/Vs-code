#include <stdio.h>

int main() {
    int num, temp, digit, sum, power;
    
    printf("Armstrong numbers between 1 and 10000:\n");
    
    for (num = 1; num <= 10000; num++) {
        temp = num;
        sum = 0;
        
        // Determine number of digits and calculate sum
        if (num < 10) {
            power = 1;
            sum = num;
        } else if (num < 100) {
            power = 2;
            while (temp > 0) {
                digit = temp % 10;
                sum += digit * digit;
                temp /= 10;
            }
        } else if (num < 1000) {
            power = 3;
            while (temp > 0) {
                digit = temp % 10;
                sum += digit * digit * digit;
                temp /= 10;
            }
        } else {
            power = 4;
            while (temp > 0) {
                digit = temp % 10;
                sum += digit * digit * digit * digit;
                temp /= 10;
            }
        }
        
        if (sum == num) {
            printf("%d\n", num);
        }
    }
    
    return 0;
}