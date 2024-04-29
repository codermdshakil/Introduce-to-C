#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 2)
    {
        int a[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        // find max number
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
            }
        }

        // find max position
        int max_pos;
        for (int i = 0; i < n; i++)
        {
            if (max == a[i])
            {
                max_pos = i;
            }
        }

        // find min number
        int min = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (a[i] < min)
            {
                min = a[i];
            }
        }

        // find min position
        int min_pos;
        for (int i = 0; i < n; i++)
        {
            if (min == a[i])
            {
                min_pos = i;
            }
        }

        // swap min to max using position
        for (int i = 0; i < n; i++)
        {
            a[min_pos] = max;
            a[max_pos] = min;
        }

        // print the swap array
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}