#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int expect_number;
    scanf("%d", &expect_number);


    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int increment_expact_number = 0, one=0, two=0;
    
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == expect_number)
        {
            increment_expact_number++;
        }
        if (ar[i] == 1)
        {
            one++;
        }
        if (ar[i] == 2)
        {
            two++;
        }
        
    }
    printf("%d %d %d", increment_expact_number, one, two);

    return 0;
}