#include <stdio.h>

int main()
{
   for (int i = 1; i <= 10; i++)
   {
    if (i%5 == 0)
    {
        printf("%d - Yes\n", i);
    }
    else{
        printf("%d - No\n", i);
    }
    
   }
   

    return 0;
}
