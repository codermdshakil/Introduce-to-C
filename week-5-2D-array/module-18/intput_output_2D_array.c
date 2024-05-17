#include <stdio.h>

int main()
{

    // declare 2D array
    int a[5][3]; // row 5, cal 3

    // taking input
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // printf("a[%d][%d] ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // showing output
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        // line shes and new line
        printf("\n");
    }

    return 0;
}