#include <stdio.h>

int main()
{
    int n, s, k;
    scanf("%d", &n);

    int mainNum = 5;

    if (n % 2 > 0)
    {
        if (n == 1)
        {
            mainNum = mainNum + 1;
        }
        else if (n == 3)
        {
            mainNum = mainNum + 2;
        }
        else if (n == 5)
        {
            mainNum = mainNum + 3;
        }
        else if (n == 7)
        {
            mainNum = mainNum + 4;
        }
        else if (n == 9)
        {
            mainNum = mainNum + 5;
        }
        else if (n == 11)
        {
            mainNum = mainNum + 6;
        }
        else if (n == 13)
        {
            mainNum = mainNum + 7;
        }
        else if (n == 15)
        {
            mainNum = mainNum + 8;
        }
        else if (n == 17)
        {
            mainNum = mainNum + 9;
        }
        else if (n == 19)
        {
            mainNum = mainNum + 10;
        }
        else if (n == 21)
        {
            mainNum = mainNum + 11;
        }
    }

    s = mainNum - 1;
    k = 1;

    for (int i = 0; i < mainNum; i++)
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

    return 0;
}