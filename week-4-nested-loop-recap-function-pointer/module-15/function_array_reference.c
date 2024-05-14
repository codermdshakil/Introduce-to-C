#include <stdio.h>
#include <string.h>

void fun(int *ar, int n)
{

    // dereference
    2 [ar] = 50;
}

int main()
{
    int ar[5] = {10, 20, 30, 40, 50};
    int sz = sizeof(ar) / sizeof(int);
    fun(ar, sz);

    // output of array
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}