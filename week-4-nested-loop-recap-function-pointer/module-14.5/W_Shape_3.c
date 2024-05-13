#include <stdio.h>

int main()
{
    int n, s, k;
    scanf("%d", &n);

    s = n - 1;
    k = 1;

    for (int i = 1; i <= (2 * n) ; i++)
    {

        // space
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        // star
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        // line shes 
        if (i <= n-1 )
        {
            s--;
            k = k + 2;
        }
        else if ( i == n)
        {
            s = 0;
            k = (n*2) -1;
        }
        else
        {
            s++;
            k = k - 2;
        }
        
        // new line 
        printf("\n");
    }

    return 0;
}