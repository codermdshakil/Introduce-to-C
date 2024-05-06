#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("N value - %d\n", n);

    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("Main Array\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ar[i]);
    }
    printf("\n");

    printf("Reverse array\n");
    
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d\n", ar[i]);
    }
    printf("\n");

    return 0;
}