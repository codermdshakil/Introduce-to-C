#include <stdio.h>
#include <limits.h>
int fun(int ar[], int n, int index)
{
    if (index == n)
    {
        return INT_MIN;
    }

    int mx = fun(ar, n, index + 1);
    if (ar[index] > mx)
    {
        return ar[index];
    }
    else
    {
        return mx;
    }
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

    int mx = fun(ar, n, 0);
    printf("Max - %d ", mx);

    return 0;
}