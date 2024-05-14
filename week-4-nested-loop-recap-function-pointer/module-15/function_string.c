#include <stdio.h>
#include <string.h>

void fun(char *ar)
{
    for (int i = 0; i < strlen(ar); i++)
    {
        printf("%c", ar[i]);
    }
}

int main()
{
    char ar[12] = "shakilahmed";
    fun(ar);
    return 0;
}