#include <stdio.h>

void fun(int *p)
{
    // derefernce and change x address value
    *p = 50;
}

int main()
{
    int x = 10;
    fun(&x); // pass reference of x
    printf("%d", x); // 50
    return 0;
}