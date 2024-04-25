#include <stdio.h>

int main()
{

    char names[12];
    for (int i = 0; i < 12; i++)
    {
        scanf("%c", &names[i]);
    }

    for (int i = 0; i < 12; i++)
    {
        printf("%d ", names[i]);
    }
    
    int sz = sizeof(names);
    printf("%d ", sz);

     
    
    
    return 0;
}