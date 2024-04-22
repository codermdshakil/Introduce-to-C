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

    int x;
    scanf("%d", &x);
    int result = -1;

    for (int i = 0; i < n; i++)
    {
        if (ar[i] == x)
        {
           result = i;
           break;
        }
    }



    if (result != result)
    {
        printf("%d\n", result);
    }
    else{
        printf("%d\n", result);
    }
    





    return 0;
}