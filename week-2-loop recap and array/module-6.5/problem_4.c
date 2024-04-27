#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int subs = a - b;
    if (subs >= 0)
    {
        printf("%d\n", subs);
    }
    else
    {
        printf("%d\n", 0);
    }

    return 0;
}