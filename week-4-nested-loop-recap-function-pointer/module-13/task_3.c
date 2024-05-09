#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d", &n);
    k=5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = k; j >= 1 ; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
        k--;
    }


    

    return 0;
}