#include <stdio.h>
#include <string.h>

int is_palindrome(char *s)
{

    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) // len / 2 using this shortcut we just make half half of string len so that we can easily compare first half with second half
    {
        if (s[i] != s[len - i - 1]) // using this shortcut we can get decrement from string lenth like if len is 6 we can get use this 5, 4,3,2,1,0
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char s[1001];
    scanf("%s", &s);

    if (is_palindrome(s))
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}