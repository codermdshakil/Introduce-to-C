#include <stdio.h>
#include <string.h>
int fun(char s[], int i)
{
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'a')
        {
            count++;
        }
        else if (s[i] == 'e')
        {
            count++;
        }
        else if (s[i] == 'i')
        {
            count++;
        }
        else if (s[i] == 'o')
        {
            count++;
        }
        else if (s[i] == 'u')
        {
            count++;
        }
        }
   return count;
}

int main()
{
    char s[201];
    fgets(s, 201, stdin);
    int result = fun(s, 0);
    printf("%d", result);
    return 0;
}