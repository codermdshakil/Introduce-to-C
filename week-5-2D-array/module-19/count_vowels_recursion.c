#include <stdio.h>
int fun(char s[], int i)
{

    if (s[i] == '\0') // fifth work
    {
        return 0;
    }

    int ans = fun(s, i + 1); // first workN

    if (s[i] >= 'A' && s[i] <= 'Z') // second work
    {
        // capital to smaller
        s[i] = s[i] + 32;
    }

    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') // thrid work
    {
        return ans + 1;
    }
    else
    {
        return ans;
    }
}
int main()
{
    char s[201];
    fgets(s, 201, stdin);
    int result = fun(s, 0);
    printf("%d", result);
    return 0;
}