#include <stdio.h>

int main()
{

    // char a[6] = {'S', 'h', 'a', 'k', 'i', 'l'}; // No gurantee 

    char a[7] = "Shakil"; // just increase 1 to print including null [Guranted]
    

    // int sz =  sizeof(a) / sizeof(char);
    // printf("%d\n",sz);

    printf("%s", a);
    return 0;
}