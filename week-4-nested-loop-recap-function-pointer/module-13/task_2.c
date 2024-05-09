#include <stdio.h>

int main()
{
    int n, stars, spaces;

    scanf("%d", &n);
    stars = n + 4;
    spaces = 1;

    for (int i = 1; i <= n; i++)
    {
        // print spraces. spaces incrise
        for (int j = 1; j <= spaces; j++)
        {
            printf(" ");
        }

        // print stars. start decrise
        for (int j = stars; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
        spaces++;
        stars = stars - 2;
    }

    return 0;
}