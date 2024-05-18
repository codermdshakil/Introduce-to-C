#include <stdio.h>

int fun(char s[], int i)
{

    int count = i;
    if (s[i] == '\0')
    {
        return count;
    }
    else
    {
        count++;
    }
    fun(s, i + 1);
}

int main()
{
    char s[101];
    scanf("%s", &s);
    int result = fun(s, 0);
    printf("S string Length - %d", result);
    return 0;
}