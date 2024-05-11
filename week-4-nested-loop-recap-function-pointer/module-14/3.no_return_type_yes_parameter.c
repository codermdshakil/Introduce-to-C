#include <stdio.h>

void sum(int x, int y)
{
    int s = x + y;
    printf("%d\n", s);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("hello world\n");

    sum(a, b); // just call the func
    printf("Ami main er shes a assi\n");

    return 0;
}


// output
// ------------
// hello world
// 110
// Ami main er shes a assi
