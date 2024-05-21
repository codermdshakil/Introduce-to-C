#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{

    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n], b[n], c[n];

        // take input of array a
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        // copy a array in b
        for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }

        // sort array B in ascending order
        qsort(b, n, sizeof(int), compare);

        // a - b and put in c
        for (int i = 0; i < n; i++)
        {
            // abs use to make value positive
            c[i] = abs(a[i] - b[i]);
        }

        // print array c
        for (int i = 0; i < n; i++)
        {

            printf("%d ", c[i]);
        }
        printf("\n");
    }

    return 0;
}

/**
 * steps
 * take n size
 * make a n size array
 * take array a input
 * copy array a named by array b
 * sort array b
 * create a array c
 * c[i] = abs(a[i] - b[i]);
 * use abs to positive number
 * and print
 */