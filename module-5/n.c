#include <stdio.h>
#include <ctype.h>

int main()
{
    char x;
    scanf("%c", &x);
    if (islower(x))
    {
        x = toupper(x);
        printf("%c\n",x);
    }
    else if (isupper(x))
    {
        x = tolower(x);

        printf("%c\n",x);
    }
    else
    {
        printf("Input valid Character");
    }

    return 0;
}