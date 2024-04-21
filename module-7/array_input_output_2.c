#include <stdio.h>

int main()
{
    // normally take input and output in array

    // int n;
    // scanf("%d", &n);
    // int ar[1];
    // ar[0] = n;
    // ar[1] = n+1;

    // printf("%d\n", ar[0]); // 10
    // printf("%d\n", ar[1]); // 11




    // dynamically how long inout  and output using for loop 

    // int m;
    // scanf("%d", &m);

    // int ar[m];

    // for (int i = 0; i < m; i++)
    // {
    //     scanf("%d", &ar[i]);
    // }
    
    // for (int i = 0; i < m; i++)
    // {
    //     printf("%d\n", ar[i]);
    // }

    int ar[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", ar[i]);
    }
    






    return 0;
}