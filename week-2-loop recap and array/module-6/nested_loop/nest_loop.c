#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int t = 1; t <= n; t++)
    {
        for (int i = 1; i <= 5; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}