#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int s, k;
    k = n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
        k--;
    }

    return 0;
}