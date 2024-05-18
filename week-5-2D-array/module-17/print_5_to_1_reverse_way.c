#include <stdio.h>

// using recursion sent argument 1 print 5 to 1

void fun(int i)
{
    if (i == 6)return;
    fun(i + 1);
    printf("%d\n", i);
}

int main()
{
    int n;
    scanf("%d ", &n);
    fun(n);
    return 0;
}