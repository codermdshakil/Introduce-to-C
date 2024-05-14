#include <stdio.h>

int main()
{
    int ar[5] = {10, 20, 30, 40, 50};
    // 1. proved that array is a pointer
    // printf("%p\n", &ar[0]);
    // printf("%p\n", ar);

    // 2. proved that array is a pointer
    // printf("%d\n", ar[0]); // 10
    // printf("%d\n", ar[1]); // 20
    // printf("%d\n", *(ar+1)); // 20
    // printf("%d\n", *(ar+3)); // 40
    // printf("%d\n", *(ar+4)); // 50

    // printf("%d\n", 1[ar]); // 20
    // printf("%d\n", 2[ar]); // 30
    // printf("%d\n", 3[ar]); // 40
    // printf("%d\n", 4[ar]); // 50

    // these way we can access array elements value
    printf("%d\n", *(ar + 1));
    printf("%d\n", *(1 + ar));
    printf("%d\n", ar[1]);
    printf("%d\n", 1 [ar]);

    return 0;
}

/**
 *  Summary
    ar[i] -> *(ar+1)
    (ar+1) -> ar[1]
    (1+ar) -> ar[1] / 1[ar]
 *
 */