#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    for (int i = 0; i < testCase; i++)
    {
        long long int gonfol, a, b, c;
        scanf("%lld %lld %lld %lld", &gonfol, &a, &b, &c);
        long long int abc_gonfol = a * b * c;

        if (gonfol % abc_gonfol == 0)
        {
            long long int x = gonfol / abc_gonfol;
            printf("%lld\n", x);
        }
        else
        {
            printf("%d\n", -1);
        }
    }

    return 0;
}