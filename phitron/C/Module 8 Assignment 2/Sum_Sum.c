#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int num;
    int positive_sum = 0, negative_sum = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (num > 0) {
            positive_sum += num;
        } else if (num < 0) {
            negative_sum += num;
        }
    }

    printf("%d %d\n", positive_sum, negative_sum);

    return 0;
}