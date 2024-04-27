#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a, min = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a < min)
        {
            min = a;
        }
    }

    printf("N - %d\n", n);
    printf("A - %d\n", a);
    printf("MIN - %d\n", min);

    return 0;
}