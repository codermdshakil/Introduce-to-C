#include <stdio.h>

int main()
{
    int ar[4][3];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &ar[i][j]);
        }
        
    }

    // full 2D array print 
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d ", ar[i][j]);
    //     }
    //     printf("\n");
        
    // }




    // excat row print 
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%d ", ar[2][i]);
    // }
    
    // excat coll
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", ar[i][1]);
    }
    
    
    return 0;
}