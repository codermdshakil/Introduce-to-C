#include <stdio.h>
#include <string.h>
int main()
{
    char a[1001], b[1001];
    scanf("%s %s", a, b);
    strcat(a,b);

    printf("%s %s", a, b);
    
    return 0;
}