#include <stdio.h>
#include <string.h>

int main()
{
    char x[1001], y[1001];
    scanf("%s %s", &x, &y);

    int x_len = strlen(x);
    int y_len = strlen(y);

    int total_len = x_len + y_len;
    char string_concat[total_len];

    // insert x valu 
    for (int i = 0; i < total_len; i++)
    {
        x[i] = x[i];
    }

    // insert y value 
    int k = x_len;
    for (int i = 0; i < total_len; i++)
    {
        x[k] = y[i];
        k++;
    }


    printf("%s %s", x, y);
    
    
    return 0;
}
