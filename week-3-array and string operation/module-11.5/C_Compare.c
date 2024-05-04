#include <stdio.h>

int main()
{
    char x[21], y[21];
    scanf("%s %s", &x, &y);
    int rs = strcmp(x, y);

    if (rs == 0)
    {
        printf("Same\n");
    }
    else if (rs > 0)
    {
        printf("%s\n", y);
    }
    else if (rs < 0)
    {
        printf("%s\n", x);
    }

    return 0;
}