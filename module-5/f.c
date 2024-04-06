#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);

    while (number >= 10)
    {
        number /= 10;
    }

    if (number % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}