#include <stdio.h>
#include <string.h>

int main()
{ 
    

    char a[20];
    fgets(a, 15, stdin);
    a[17] = '\0';
    printf("%s", a);



    return 0;
}