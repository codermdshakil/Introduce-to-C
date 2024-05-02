#include <stdio.h>
#include <string.h>

int main()
{
    char a[1001], b[1001];
    scanf("%s %s", &a, &b);

    int rs = strcmp(a,b);

    if (rs == 0)
    {
        printf("Same\n");
    }
    else if (rs>0)
    {
        printf("B choto\n");
    }
    else if (rs< 0)
    {
        printf("A choto\n");
    }
    

    

    return 0;
}

/**
 *  strcmp  use for loxicographical compare
 * strcmp return 3 value
 * 0 when two string are equal
 * 0 < when b choto
 * 0 > when a choto
 *
*/