#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int ar[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    // output of array
    for (int i = 0; i < row; i++)
    {
        // reverse here just j start from 2,1,0 and stop it on then j  0
        for (int j = col - 1; j >= 0; j--)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }

    return 0;
}