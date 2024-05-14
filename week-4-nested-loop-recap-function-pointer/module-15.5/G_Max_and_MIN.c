#include <stdio.h>
#include <limits.h>

void myFunc(int * ar, int n){

    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
         if (min > ar[i])
         {
            min = ar[i];
         }
         
    }
   

    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
         if (max < ar[i])
         {
            max = ar[i];
         }
         
    }
    printf("%d %d", min, max);
    
}

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int sz = sizeof(ar)/sizeof(int);

    myFunc(ar, sz);
     

    return 0;
}