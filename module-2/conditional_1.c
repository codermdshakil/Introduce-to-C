#include <stdio.h>

int main()
{

    int taka;
    scanf("%d", &taka);

    if (taka == 100)
    {
        printf("Barger Khabo \n");
    }
    else if (taka >= 150 )
    {
        printf("Morok Polaw Khabo \n");
    }
    else{
        printf("Khabo na \n");
    };

    int a = 10;
    int b = 5;

    int c = 5;
    int d = 7;

    if (a > b && c < d)
    {
        printf("Right");
    }
    else
    {
        printf("Wrong");
    };

    return 0;
}

/**
 * If ,else - conditional statement
 */
