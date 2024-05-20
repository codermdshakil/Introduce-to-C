#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int ar[row][col];

    // take array input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    int flag = 1;

    if (row != col)
    {
        flag = 0;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // check for primary diagonal
            if (i == j)
            {
                if (ar[i][j] != 1)
                {
                    flag = 0;
                }
            }
            // check for secondary diagonal
            else if (i + j == row - 1)
            {

                if (ar[i][j] != 1)
                {
                    flag = 0;
                }
            }
            // others value
            else
            {
                if (ar[i][j] != 0)
                {
                    flag = 0;
                }
            }
        }
    }

    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {

        printf("NO\n");
    }

    // // output of array
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         printf("%d ", ar[i][j]);
    //     }
    //     printf("\n");
    //     }
    return 0;
}