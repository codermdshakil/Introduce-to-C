#include <stdio.h>
#include <string.h>

int main()
{

    char x[7], y[7];
    scanf("%s %s", x, y);

    for (int i = 0; i < 7; i++)
    {
         x[i] = y[i];
    }

    printf("%s\n", x);
    printf("%s", y);
    
    
    return 0;
}