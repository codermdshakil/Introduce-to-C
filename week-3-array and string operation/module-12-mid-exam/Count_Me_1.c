#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int divide_by_2 = 0, divide_by_3 = 0;

    for (int i = 0; i < n; i++)
    {
        if (ar[i] % 2 == 0)
        {
            divide_by_2++;
        }
        else if (ar[i] % 3 == 0)
        {
            divide_by_3++;
        }
        else if (ar[i] % 2 == 0 && ar[i] % 3 == 0)
        {
            divide_by_2++;
        }
    }

    printf("%d %d", divide_by_2, divide_by_3);

    return 0;
}