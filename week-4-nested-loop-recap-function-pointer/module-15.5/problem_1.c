#include <stdio.h>
#include <stdlib.h>

int myFun(int n){
    return abs(n);
}

int main()
{
    int n;
    scanf("%d", &n);
    int result = myFun(n);
    printf("%d", result);
    return 0;
}