#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    // frist array input
    int ar1[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &ar1[i][j]);
        }
    }

     

    // second array input
    int ar2[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &ar2[i][j]);
        }
    }

    

    // sum of array
    int sum[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // sum input array 1 + array  2
            scanf("%d", &ar1[i][j] + ar2[i][j]);
        }
    }

    // output of sum of array 1 and array 2
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", ar1[i][j] + ar2[i][j]);
        }

        printf("\n");
    }

    return 0;
}