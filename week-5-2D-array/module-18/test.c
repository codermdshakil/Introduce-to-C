#include <stdio.h>

int main()
{
    int a[5][4];

    // taking 2d array of array input 
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // showing 2d array of array output 
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("%d ", a[i][j]);
    //     }
    //     printf("\n");
    // }

// if i want to find a specific cell then i need 2 thing first is index of i and second is index of j 

    // printf("%d", a[0][0]); // 2 
    // printf("%d", a[2][2]); // 8 
    
    return 0;
}