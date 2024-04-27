#include <stdio.h>

int main()
{

    int a = 10;
    int b = 8;
    int c = 10;

    // And &&
    // if (a > b && b < c)
    // {
    //     printf("You are Right");
    // }
    // else
    // {
    //     printf("Wrong");
    // }

    // Or ||
    if (a > b || b < c)
    {
        printf("You are Right");
    }
    else
    {
        printf("Wrong");
    }

    return 0;
}

/**
 * Logical Operator
 * Logical operator set in between two relation
 *
 * && -> And Operator
 * || -> Or Operator
 */
