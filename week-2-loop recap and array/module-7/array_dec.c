#include <stdio.h>

int main()
{
    // make 5 variables
    int ar[5];

    // array input
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ar[i]);
    }

    // array output
    for (int t = 0; t <= 5; t++)
    {
        printf("%d\n", ar[t]);
    }

    return 0;
}