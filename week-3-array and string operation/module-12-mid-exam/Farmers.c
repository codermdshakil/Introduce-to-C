
#include <stdio.h>

int main()
{
    int t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        float work_rate = m1 / d;
        float reduce_day = (float)m1 / (m1 + m2) * d;
        int fewer_days = d - (int)reduce_day;
        printf("%d \n", fewer_days);
    }

    return 0;
}