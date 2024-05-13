#include <stdio.h>

int main()
{
    int x = 10;
    int *ptr = &x;
    int *ptr2 = ptr;
    *ptr2 = 100;
    printf("%d", x);

    return 0;
}