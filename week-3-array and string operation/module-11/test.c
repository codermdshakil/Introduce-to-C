#include <stdio.h>
#include <string.h>

int main()
{

    char x[1001], y[1001];
    scanf("%s %s", &x, &y);


    int result = strcmp(x,y);
    if (result < 0)
    {
        printf("X is smaller\n");
    }
    else if (result > 0)
    {
        printf("Y is smaller\n");
    }
    else{
        printf("Same\n");
    }
 
    
    
    
    return 0;
}