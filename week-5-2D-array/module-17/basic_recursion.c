#include <stdio.h>

int fact(int n){
    if (n==1)
    {
        return printf("if - %d\n", 1);
    }
    else{
        printf("else - %d\n", fact(n-1));
    }
    n--;
}

int main()
{
    int n;
    scanf("%d", &n);
    fact(n);
    return 0;
}