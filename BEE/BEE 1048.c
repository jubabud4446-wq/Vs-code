#include <stdio.h>
#include <math.h>
int main() {   
    float salary, newsalary, moneyearned, percentage;
        scanf("%f", &salary);
        if (salary <= 400.00){
                percentage = 15;
                moneyearned = ((salary * percentage) / 100);
                newsalary = salary + moneyearned;
                printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%", newsalary, moneyearned, percentage);
                }
        else if (salary > 400.00 && salary <= 800.00){
                percentage = 12;
                moneyearned = ((salary * percentage) / 100);
                newsalary = salary + moneyearned;
                printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%", newsalary, moneyearned, percentage);
                }
        else if (salary > 800.00 && salary <= 1200.00){
                percentage = 10;
                moneyearned = ((salary * percentage)) / 100;
                newsalary = salary + moneyearned;
                printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%", newsalary, moneyearned, percentage);
                }
        else if (salary > 1200.00 && salary <= 2000.00){
                percentage = 7;
                moneyearned = ((salary * percentage) / 100);
                newsalary = salary + moneyearned;
                printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%", newsalary, moneyearned, percentage);
                }
        else if (salary > 2000.00){
                percentage = 4;
                moneyearned = ((salary * percentage) / 100);
                newsalary = salary + moneyearned;
                printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%", newsalary, moneyearned, percentage);
                }
    return 0;

}
/*

                                             OPTIMIZED CODE

#include <stdio.h>

int main() {
    float salary, newsalary, moneyearned;
    int percentage;

    scanf("%f", &salary);

    if (salary <= 400.00)
        percentage = 15;
    else if (salary <= 800.00)
        percentage = 12;
    else if (salary <= 1200.00)
        percentage = 10;
    else if (salary <= 2000.00)
        percentage = 7;
    else
        percentage = 4;

    moneyearned = (salary * percentage) / 100.0;
    newsalary = salary + moneyearned;

    printf("Novo salario: %.2f\n", newsalary);
    printf("Reajuste ganho: %.2f\n", moneyearned);
    printf("Em percentual: %d %%\n", percentage);

    return 0;
}
*/