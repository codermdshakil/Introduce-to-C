#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        int n;
        scanf("%d", &n);

        char s[100001];
        scanf("%s", s);

        int t = 0, p = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T')
            {
                t++;
            }
            else
            {
                p++;
            }
        }

        if (t == p)
        {
            printf("Draw\n");
        }
        else if (p > t)
        {

            printf("Pathaan\n");
        }
        else
        {
            printf("Tiger\n");
        }
    }

    return 0;
}