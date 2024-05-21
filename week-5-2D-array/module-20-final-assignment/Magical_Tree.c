#include <stdio.h>

int main()
{
    int number = 5, s, s1, k, k1;
    int n;
    scanf("%d", &n);

    int one = number + n;
    int three = number + n;
    int five = number + n;

    s = 8 - 1;
    k = 1;
    s1 = s;
    k1 = n;

    for (int i = 0; i < one || i < three || i < five; i++)
    {
        // print spaceN
        for (int j = 1; j <= s; j++)
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

    for (int i = 0; i < 5; i++)
    {
        // print spaceN
        for (int j = 1; j <= s1; j++)
        {
            printf(" ");
        }

        // print start
        for (int j = 1; j <= k1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}