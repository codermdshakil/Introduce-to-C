#include <stdio.h>

int main()
{
    int n, s, k;
    scanf("%d", &n);
    s = n - 1;
    k = 1;

    for (int i = 1; i <= n; i++)
    {
        // print s -> spaces
        for (int j = s; j >= 1; j--)
        {
            printf(" ");
        }

        // print k -> starts
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
        s--;       // decrice 1
        k = k + 2; // incrice 2
    }

    return 0;
}