#include <stdio.h>

int main()
{

    int tk;
    scanf("%d", &tk);

    // printf("%d", tk);

    if (tk >= 10000)
    {
        if (tk == 20000)
        {
            printf("Gucci Bag ");
        }
        else if(tk >= 20000){
            printf("Gucci Bag and Gucci Belt");
        }
        
    }
    else if (tk >= 5000)
    {
        printf("Levis Bag");
    }
    else
    {
        printf("Something buy from Newmarket");
    }
    
    

    return 0;
}