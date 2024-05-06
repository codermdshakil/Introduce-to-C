#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    // array elements input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    // main array outputs
    printf("Main = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

    // reverse array output
    printf("\n");
    printf("Reverse = ");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}
