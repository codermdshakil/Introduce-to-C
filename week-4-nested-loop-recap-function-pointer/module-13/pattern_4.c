#include <stdio.h>

int main()
{
    int n, space_1, star_1;
    scanf("%d", &n);

    space_1 = n - 1;
    star_1 = 1;

    for (int i = 1; i <= n; i++)
    {
        // space print dec
        for (int j = space_1; j >= 1; j--)
        {
            printf(" ");
        }

        // print star inc
        for (int j = 1; j <= star_1; j++)
        {
            printf("*");
        }
        printf("\n");
        space_1--;
        star_1 = star_1 + 2;
    }

    
    // reverse
    int star_2, space_2;
    space_2 = 1;
    star_2 = n + 1;
    for (int i = 1; i <= n - 1; i++)
    {
        // print spaces inc
        for (int j = 1; j <= space_2; j++)
        {
            printf(" ");
        }
        // print stars dec
        for (int j = star_2; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
        space_2++;
        star_2 = star_2 - 2;
    }

    return 0;
}