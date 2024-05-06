#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char s[10001];
        scanf("%s", s);
        int capital_letter = 0, small_letter = 0, number = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] - 48 >= 0 && s[i] - 48 <= 9)
            {
                number++;
            }
            else if (s[i] == toupper(s[i]))
            {
                capital_letter++;
            }
            else if (s[i] == tolower(s[i]))
            {
                small_letter++;
            }
        }
        printf("%d %d %d\n", capital_letter, small_letter, number);
    }

    return 0;
}