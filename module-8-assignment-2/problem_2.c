#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);

    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i > 0)
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    else if (n < 0)
    {
        for (int i = n; i <= 0; i++)
        {
            printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}