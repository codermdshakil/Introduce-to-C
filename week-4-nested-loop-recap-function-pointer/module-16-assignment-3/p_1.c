#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    // Upper half
    for (int i = N; i >= 1; i--) {
        // Spaces
        for (int j = 1; j <= i - 1; j++) {
            printf(" ");
        }
        // Symbols
        for (int j = 1; j <= (N - i + 1) * 2 - 1; j++) {
            printf("#");
        }
        printf("\n");
    }
    
    // Lower half
    for (int i = 2; i <= N; i++) {
        // Spaces
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Symbols
        for (int j = 1; j <= (i * 2) - 1; j++) {
            printf("#");
        }
        printf("\n");
    }
    
    return 0;
}
