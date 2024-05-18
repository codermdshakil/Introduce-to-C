#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int ar[row][col];

    // input of matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    int flag = 1;


    // square matrix hote hobe
    if (row != col)
    {
        flag = 0;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // korno hole continue koro
            if (i == j)
            {
                continue;
            }

            // korno sara baki gulo jodi o hoy tahole diagonal na
            if (ar[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    // flag 1 means - primary diagonal matrix 
    // flag 0 means - not primary diagonal matrix 

    if (flag == 1)
    {
        printf("Primary Diagonal\n");
    }
    else
    {

        printf("Not Primary Diagonal\n");
    }
    return 0;
}