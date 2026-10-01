#include <stdio.h>

int main() {
    int N, S;
    scanf("%d", &N);
    scanf("%d", &S);
    printf("\n");
    if (S == 0 || S >= N) {
        printf("Error\n");
    } else {
        int temp = N;
        while (temp >= 0) {
            printf("%d\n", temp);
            temp = temp - S;
        }
    }
    return 0;
}
