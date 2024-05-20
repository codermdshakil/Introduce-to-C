#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    for (int i = 0; i < testCase; i++)
    {
        int gonfol, a, b, c;
        scanf("%d %d %d %d", &gonfol, &a, &b, &c);
        int abc_gonfol = a * b * c;

        if (gonfol % abc_gonfol == 0)
        {
            int x = gonfol / abc_gonfol;
            printf("%d\n", x);
        }
        else
        {
            printf("%d\n", -1);
        }
    }

    return 0;
}