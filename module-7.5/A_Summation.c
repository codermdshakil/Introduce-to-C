#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int ar[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ar[i];
    }

    if (sum < 0)
    {
        int pos = abs(sum);
        printf("%d\n", pos);
    }
    else
    {
        printf("%d\n", sum);
    }

    return 0;
}