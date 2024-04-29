#include <stdio.h>
#include <string.h>


int main()
{
    char a[30];
    fgets(a, 30, stdin);

    // int st = strlen(a); - length
    char string_copy = strcpy(a[0], a[15]);

    printf("%c", string_copy);
    

    return 0;
}

/**
 * Length
 * 
 * int count = 0;
    int i = 0;
    while (a[i] != '\0')
    {
        printf("%c ", a[i]);
        count++;
        i++;
    }
    printf("\n");
    printf("%d", count);

*/