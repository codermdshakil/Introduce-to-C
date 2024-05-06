#include <stdio.h>
#include <string.h>

int main()
{
    char s[100001];
    scanf("%s", s);
    int vowels[5] = {'a', 'e', 'i', 'o', 'u'};

    int sum = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            sum++;
        }
    }

    printf("%d", sum);

    return 0;
}