#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n], b[n], c[n];

    // take input of array a 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = INT_MAX;
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 6)
        {
            printf("%d ", a[i]) ;
        }
        
    }


    return 0;
}