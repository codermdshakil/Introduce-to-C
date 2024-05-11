#include <stdio.h>

int main()
{
    int x = 10;
    printf("%p\n", &x);
    int *p = &x;
    printf("%p\n", p);

    // derefrence
    *p = 300; // change x value
    printf("%d", *p); // value of x
    return 0;
}