#include <stdio.h>
#include <string.h>

int main()
{
    char a[1001], b[1001];
    scanf("%s %s", &a, &b);

    int i = 0;
    while (1)
    {
        // check using null 
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Same\n");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("A choto\n");
            break;
        }

        else if (b[i] == '\0')
        {
            printf("B choto\n");
            break;
        }



        // check using value
        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] < b[i])
        {
            printf("A choto\n");
            break;
        }
        else{
            printf("B choto\n");
            break;
        }
        
    }

    return 0;
}

/**
 *
 * //For infinity loop
 *
 * for(i=0;  ;i++){
 *
 * break;
 * }
 *
 *
 * // while infinity loop
 *  while(1){
 * break;
 *
 * }
 */