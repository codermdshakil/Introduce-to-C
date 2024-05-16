#include <stdio.h>

int main()
{
    int n, s, h;
    scanf("%d", &n);

    s = n - 1;
    h = 1;

    for (int i = 1; i <= (n * 2) - 1; i++)
    {
        // print space
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        if (i % 2 == 0)
        {
            // print slah
            for (int j = 1; j <= h; j++)
            {
                printf("-");
            }
        }
        else
        {
            // print hash
            for (int j = 1; j <= h; j++)
            {
                printf("#");
            }
        }

        if (i < n)
        {

            printf("\n");
            s--;
            h = h + 2;
        }
        else
        {
            printf("\n");
            s++;
            h = h - 2;
        }
    }

    return 0;
}