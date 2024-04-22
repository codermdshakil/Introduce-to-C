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
    }
    else
    {
        for (int i = 0; i >= n; i--)
        {
            printf("%d ", i);
        }
    }

    return 0;
}