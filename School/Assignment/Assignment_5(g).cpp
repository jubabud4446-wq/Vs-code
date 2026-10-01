#include <stdio.h>

int main() {
    int x = 2, y, z = 4;
    y = x>>2 + z<<1;
    printf("%d", y);

    return 0;
}