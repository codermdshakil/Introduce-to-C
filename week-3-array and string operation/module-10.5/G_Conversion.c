#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char n[100001];
    fgets(n, 100001, stdin);
    int word_len = strlen(n);

    // comma to space
    for (int i = 0; i < word_len; i++)
    {
        if (n[i] == ',')
        {
            n[i] = ' ';
        }
    }

    // smaller to capital
    for (int i = 0; i < word_len; i++)
    {
        if (n[i] == tolower(n[i]))
        {
            n[i] = toupper(n[i]);
        }
        else
        {
            n[i] = tolower(n[i]);
        }
    }
    printf("%s", n);

    return 0;
}