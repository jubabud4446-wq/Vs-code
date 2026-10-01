#include <stdio.h>

int main() {
    float basic, houseRentPercent, houseRent, medical, total;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    printf("Enter house rent (in percentage of basic salary): ");
    scanf("%f", &houseRentPercent);

    houseRent = (houseRentPercent / 100) * basic;

    medical = 0.10 * basic;

    total = basic + houseRent + medical;
    
    printf("\n--- Salary Details ---\n");
    printf("Basic Salary       : %.2f\n", basic);
    printf("House Rent (%.2f%%): %.2f\n", houseRentPercent, houseRent);
    printf("Medical Allowance  : %.2f\n", medical);
    printf("Total Salary       : %.2f\n", total);

    return 0;
}
