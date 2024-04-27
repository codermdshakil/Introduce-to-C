#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int r1 = a + b * c;
    int r2 = a + b - c;
    int r3 = a - b + c;
    int r4 = a - b * c;
    int r5 = a * b + c;
    int r6 = a * b - c;

    if (r1 == d)
    {
        printf("YES\n");
    }
    else if (r2 == d)
    {
        printf("YES\n");
    }
    else if (r3 == d)
    {
        printf("YES\n");
    }
    else if (r4 == d)
    {
        printf("YES\n");
    }
    else if (r5 == d)
    {
        printf("YES\n");
    }
    else if (r6 == d)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
