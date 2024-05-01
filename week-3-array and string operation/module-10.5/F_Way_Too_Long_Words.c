#include <stdio.h>
#include <string.h>

int main()
{

    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char n[1001];
        scanf("%s", &n);
        int world_len = strlen(n);
        char first_ch, last_ch;

        if (world_len > 10)
        {
            for (int i = 0; i < world_len; i++)
            {
                first_ch = n[0];
                last_ch = n[i];
            }
            printf("%c%d%c\n", first_ch, world_len - 2, last_ch);
        }
        else if (world_len < 10)
        {
            printf("%s\n", n);
        }
    }

    return 0;
}