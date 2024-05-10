#include <stdio.h>

int dbl(int x)
{
    return x * 2;
}

int main()
{
    int result = dbl(5);
    
    printf("%d", result);
    return 0;
}