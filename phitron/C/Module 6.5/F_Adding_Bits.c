// #include <stdio.h>
// int main() 
// {
//     int binaryA[32], binaryB[32], decimalans[32];
//     int a, b, c = 0, sum = 0;
//     scanf("%d %d", &a, &b);
  
//     for (int i = 0; i < a; i++)
//     {
//         binaryA[i] = a % 2;
//         a /= 2;
//     }
   
//     for (int i = 0; i < b; i++)
//     {
//         binaryB[i] = b % 2;
//         b /= 2;
//     }
    
//     for (int i = 0; i < a || i < b; i++)
//     {
//         if (binaryA[i] == 1 || binaryB[i] == 1)
//         {
//             decimalans[i] = 1;
//         }
//         else
//         {
//             decimalans[i] = 0;
//         }
//     }
    
//     for (int i = a || i == b; i >= a || i >= b; i++)
//     {
//         c = decimalans[i] * decimalans[i];
//         sum += c;
//     }
    
//     printf("%d", sum);

//     return 0;
// }


#include <stdio.h>

int main() {
    int binaryA[32] = {0}, binaryB[32] = {0}, result[32] = {0};
    int a, b, i = 0, j = 0, k, ans = 0, power = 1;
    scanf("%d %d", &a, &b);

    int tempA = a, tempB = b;

    // Convert A to binary
    while (tempA > 0) {
        binaryA[i++] = tempA % 2;
        tempA /= 2;
    }
    int lenA = i;

    // Convert B to binary
    while (tempB > 0) {
        binaryB[j++] = tempB % 2;
        tempB /= 2;
    }
    int lenB = j;

    // Bitwise OR
    int maxLen = (lenA > lenB) ? lenA : lenB;
    for (k = 0; k < maxLen; k++) {
        result[k] = (binaryA[k] | binaryB[k]);
    }

    // Convert binary result to decimal
    for (k = 0; k < maxLen; k++) {
        ans += result[k] * power;
        power *= 2;
    }

    printf("%d\n", ans);
    return 0;
}
