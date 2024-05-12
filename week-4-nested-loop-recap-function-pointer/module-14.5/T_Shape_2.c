#include <stdio.h>

int main()
{
    int n, s, k;
    scanf("%d", &n);
    s = n - 1;
    k = 1;

    for (int i = 0; i < n; i++)
    {
        // print space
        for (int j = s; j >= 1; j--)
        {
            printf(" ");
        }

        // print star
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        printf("\n");
        s--;
        k = k + 2;
    }

    return 0;
}