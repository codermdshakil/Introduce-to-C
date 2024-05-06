#include <stdio.h>

int main()
{
    int m;
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        int n;
        scanf("%d", &n);
        int ar[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }

        int x;
        scanf("%d", &x);
        int result = 0;

        for (int i = 0; i < n; i++)
        {
            if (ar[i] == x)
            {
                result++;
            }
        }

        if (result > 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}