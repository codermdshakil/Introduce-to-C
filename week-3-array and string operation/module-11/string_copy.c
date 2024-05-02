#include <stdio.h>
#include <string.h>

int main()
{

    char x[1001], y[1001];
    scanf("%s %s", x, y);

    // using loop 
    // for (int i = 0; i <= strlen(y); i++)
    // {
    //      x[i] = y[i];
    // }

    strcpy(x,y);

    printf("%s\n", x);
    printf("%s", y);
    
    
    return 0;
}