#include <stdio.h>

void fun(int ar[], int i)
{
    // base case if index equal 0 then return
    if (i < 0)
    {
        return;
    }
    else if (i % 2 == 0)
    {
        // print if the index is even number
        printf("%d ", ar[i]);
    }
    // start recursion from the last index 
    fun(ar, i - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    // sent last index of array 
    fun(ar, n - 1);

    return 0;
}